#include "removeExtraSpaces.h"

void test_removeExtraSpaces() {
    char s1[] = "";
    removeExtraSpaces(s1);
    ASSERT_STRING("", s1);

    char s2[] = "a";
    removeExtraSpaces(s2);
    ASSERT_STRING("a", s2);

    char s3[] = "abcd";
    removeExtraSpaces(s3);
    ASSERT_STRING("abcd", s3);

    char s4[] = "a b cd";
    removeExtraSpaces(s4);
    ASSERT_STRING("a b cd", s4);

    char s5[] = "          a    b cd";
    removeExtraSpaces(s5);
    ASSERT_STRING(" a b cd", s5);

    char s6[] = "          a    b cd   ";
    removeExtraSpaces(s6);
    ASSERT_STRING(" a b cd ", s6);
}

void removeExtraSpaces(char *s) {
    char *begin = s;

    while (*s != '\0') {
        if (!(isspace(*s) && isspace(*(s + 1))))
            *begin++ = *s;

        s++;
    }

    *begin = '\0';
}