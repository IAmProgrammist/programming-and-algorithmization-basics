#include <stdio.h>
#include <string.h>

#define MAX_RECIPE_LENGTH 100

long long max(long long a, long long b) {
    return a > b ? a : b;
}

long long
moneyRequire(long long int sandvichAmount, int bread, int sausage, int cheese, int amount, int amount1, int amount2,
             int price,
             int price1, int price2) {
    return max(sandvichAmount * bread - amount, 0) * price +
           max(sandvichAmount * sausage - amount1, 0) * price1 +
           max(sandvichAmount * cheese - amount2, 0) * price2;
}

void getRecipe(char *recipe, int *nBread, int *nSausage, int *nCheese) {
    // strlen - функция, определенная в string.h
    // для вычисления длины строки
    int nIngredients = strlen(recipe);
    *nBread = 0;
    *nSausage = 0;
    *nCheese = 0;
    for (int ingredientIndex = 0; ingredientIndex < nIngredients;
         ingredientIndex++) {
        switch (recipe[ingredientIndex]) {
            case 'B':
                (*nBread)++;
                break;
            case 'S':
                (*nSausage)++;
                break;
            case 'C':
                (*nCheese)++;
                break;
        }
    }
}

int main() {
    char recipe[MAX_RECIPE_LENGTH + 1]; // +1 - под ноль-символ
    int nBread, nSausage, nCheese;
    gets(recipe);
    getRecipe(recipe, &nBread, &nSausage, &nCheese);

    int bAmount, sAmount, cAmount;
    scanf("%d %d %d", &bAmount, &sAmount, &cAmount);

    int bPrice, sPrice, cPrice;
    scanf("%d %d %d", &bPrice, &sPrice, &cPrice);

    long long money;
    scanf("%lld", &money);

    long long left = -1;
    long long right = 100000000000000;

    while (right - left > 1) {
        long long middle = (right + left) / 2;

        if (moneyRequire(middle, nBread, nSausage, nCheese,
                         bAmount, sAmount, cAmount,
                         bPrice, sPrice, cPrice) <= money)
            left = middle;
        else
            right = middle;
    }

    printf("%lld", left);

    return 0;
}


