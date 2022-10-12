#include <stdio.h>

int main() {
    int taskAmount;
    scanf("%d", &taskAmount);

    for (int i = 0; i < taskAmount; i++) {
        long long tableHeight, tableWidth, numInTable;
        scanf("%lld %lld %lld", &tableHeight, &tableWidth, &numInTable);

        long long row = (numInTable % tableHeight - 1 + tableHeight) % tableHeight;
        long long column = ((numInTable - 1 + tableHeight) / tableHeight);
        long long resultNum = row * tableWidth + column;

        printf("%lld\n", resultNum);
    }

    return 0;
}