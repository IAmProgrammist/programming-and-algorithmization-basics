#include "replaceDigitsBySpaces.h"

char _stringBuffer[MAX_STRING_SIZE + 1];

void test_replaceDigitsBySpaces() {
    char s1[] = "";
    replaceDigitsBySpaces(s1);
    ASSERT_STRING("", s1);

    char s2[] = "abcd";
    replaceDigitsBySpaces(s2);
    ASSERT_STRING("abcd", s2);

    char s3[] = " A   BB BB CCC D DD    ";
    replaceDigitsBySpaces(s3);
    ASSERT_STRING(" A   BB BB CCC D DD    ", s3);

    char s4[] = "1D1D2D3D4D5D6D7D8D9";
    replaceDigitsBySpaces(s4);
    ASSERT_STRING(" D D  D   D    D     D      D       D        D         ", s4);

    char s5[] = "112";
    replaceDigitsBySpaces(s5);
    ASSERT_STRING("    ", s5);
}

void replaceDigitsBySpaces(char *begin) {
    char *beg = begin;
    char *bBegin = _stringBuffer;

    while (*begin != '\0') {
        if (isdigit(*begin)) {
            int times = *begin - '0';

            for (int i = 0; i < times; i++)
                *bBegin++ = ' ';
        } else
            *bBegin++ = *begin;

        begin++;
    }

    *bBegin = '\0';

    memcpy(beg, _stringBuffer, (bBegin - _stringBuffer + 1) * sizeof(char));
}