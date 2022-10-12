#include <stdio.h>

long long max(long long a, long long b) {
    return a > b ? a : b;
}

int main() {
    long long chizhiksSasha, chizhicksMasha, coconutPrice;
    scanf("%lld %lld %lld", &chizhiksSasha, &chizhicksMasha, &coconutPrice);

    long long coconuts = chizhiksSasha / coconutPrice + chizhicksMasha / coconutPrice;
    long long changeSasha = chizhiksSasha % coconutPrice;
    long long changeMasha = chizhicksMasha % coconutPrice;
    long long totalChange = changeMasha + changeSasha;

    long long changeTransfer;
    if (totalChange >= coconutPrice) {
        coconuts++;
        changeTransfer = coconutPrice - max(changeMasha, changeSasha);
    } else
        changeTransfer = 0;

    printf("%lld %lld", coconuts, changeTransfer);

    return 0;
}