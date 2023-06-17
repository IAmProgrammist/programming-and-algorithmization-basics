#include <iostream>

int main() {
    try {
        int errorType;
        std::cin >> errorType;

        switch (errorType) {
            case 0:
                throw 42;
            case 1:
                throw 42ULL;
            case 2:
                throw std::string("42");
            default:
                throw std::vector<int>(42, 42);
        }
    } catch (int &error) {
        std::cerr << "You've been int excepted!" << std::endl;
    } catch (unsigned long long &error) {
        std::cerr << "You've been unsigned long long excepted!" << std::endl;
    } catch (std::string &error) {
        std::cerr << "You've been string excepted!" << std::endl;
    } catch (std::vector<int> &error) {
        std::cerr << "You've been vector excepted!" << std::endl;
    }

    return 0;
}