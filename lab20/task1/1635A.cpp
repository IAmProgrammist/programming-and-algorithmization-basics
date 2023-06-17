#include <iostream>
#include <vector>

int main() {
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for (auto &el : a)
            std::cin >> el;

        for (int j = 0; j < a.size() - 1; j++) {
            for (int k = j + 1; k < a.size(); k++) {
                int sDiff = a[j] & a[k];
                a[j] -= sDiff;
            }
        }

        int sum = 0;
        for (auto &el : a)
            sum += el;

        std::cout << sum << "\n";
    }
}