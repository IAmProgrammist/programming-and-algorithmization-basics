#include <assert.h>
#include "../string/string_.h"

void teststrlen() {
    assert(strlen("NonEmptyString") == 14);
    assert(strlen("") == 0);
}

void testfind() {
    char a1[] = "There ies leoets eeeof eeeeeee";
    assert(find(a1, a1 + 31, 'e') == a1 + 2);
    assert(find(a1 + 6, a1 + 25, 'e') == a1 + 7);
    assert(find(a1, a1 + 31, 'z') == a1 + 31);
}

void testfindnonspace() {
    char a1[] = "         ";
    assert(findNonSpace(a1) == a1 + 9);

    char a2[] = "   Lorem";
    assert(findNonSpace(a2) == a2 + 3);

    char a3[] = "Ipsum     ";
    assert(findNonSpace(a3) == a3);

    char a4[] = "";
    assert(findNonSpace(a4) == a4);
}

void testfindspace() {
    char a1[] = "";
    assert(findSpace(a1) == a1);

    char a2[] = "      ";
    assert(findSpace(a2) == a2);

    char a3[] = "Ipsum     ";
    assert(findSpace(a3) == a3 + 5);

    char a4[] = "Cool\t\ntext with\t\nlots of spaces";
    assert(findSpace(a4) == a4 + 4);
}

void testfindnonspacereverse() {
    char a1[] = "         ";
    assert(findNonSpaceReverse(a1 + 8, a1 - 1) == a1 - 1);

    char a2[] = "   Lorem";
    assert(findNonSpaceReverse(a2 + 7, a2 - 1) == a2 + 7);

    char a3[] = "Ipsum   ";
    assert(findNonSpaceReverse(a3 + 7, a3 - 1) == a3 + 4);

    char a4[] = "";
    assert(findNonSpaceReverse(a4 - 1, a4 - 1) == a4 - 1);
}

void testfindspacereverse() {
    char a1[] = "";
    assert(findSpaceReverse(a1 - 1, a1 - 1) == a1 - 1);

    char a2[] = "      ";
    assert(findSpaceReverse(a2 + 5, a2 - 1) == a2 + 5);

    char a3[] = " Ipsum";
    assert(findSpaceReverse(a3 + 5, a3 - 1) == a3);

    char a4[] = "Cool\t\ntext with\t\nlots of\t\nspaces";
    assert(findSpaceReverse(a4 + 31, a4 - 1) == a4 + 25);
}

void teststrcmp() {
    assert(!strcmp("", ""));
    assert(!strcmp("abcde", "abcde"));
    assert(strcmp("abc", "abcde"));
    assert(strcmp("abcde", "abc"));
    assert(strcmp("", "abc"));
    assert(strcmp("abc", ""));
    assert(strcmp("b", "a") == 1);
}

void test() {
    teststrlen();
    testfind();
    testfindnonspace();
    testfindspace();
    testfindnonspacereverse();
    teststrcmp();
}

int main() {
    test();

    return 0;
}

