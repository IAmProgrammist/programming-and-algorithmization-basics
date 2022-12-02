#include "../../libs/labtestgenerator/testgenerator.h"

void test() {
}

int main() {
    for (unsigned long long i = 0; i < 0xffffffffffffffffull; i++)

        registerTestFromFilePath(
                "C:\\Users\\vladi\\Workspace\\C\\programming-and-algorithmization-basics\\lab6\\tests.json", "tests",
                "you look", "stupid");

    return 0;
}