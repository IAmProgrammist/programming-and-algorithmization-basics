#include <iostream>

int main() {
    try {
        throw false;
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