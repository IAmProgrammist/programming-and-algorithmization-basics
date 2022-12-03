#include "../../libs/labtestgenerator/testgenerator.h"

void test() {
}

int main() {

    registerTestFromFilePath(
            "/home/vlad/Desktop/aboba.json", "tasks",
            "you look", "stupid");

    registerExpandedTestFromFilePath(
            "/home/vlad/Desktop/aboba.json", "tasks",
            "and also", "you smell bad", "weirdo");

    return 0;
}