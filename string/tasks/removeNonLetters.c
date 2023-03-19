#include "removeNonLetters.h"

void test_removeNonLetters() {
    char s1[] = "";
    removeNonLetters(s1);
    ASSERT_STRING("", s1);

    char s2[] = "ABCD";
    removeNonLetters(s2);
    ASSERT_STRING("ABCD", s2);

    char s3[] = "A B C D";
    removeNonLetters(s3);
    ASSERT_STRING("ABCD", s3);

    char s4[] = "       ";
    removeNonLetters(s4);
    ASSERT_STRING("", s4);

    char s5[] = "   AB C    D    ";
    removeNonLetters(s5);
    ASSERT_STRING("ABCD", s5);
}

void removeNonLetters(char *s) {
    char *endSource = s + strlen(s);
    char *destination = copyIf(s, endSource, s, isgraph);
    *destination = '\0';
}