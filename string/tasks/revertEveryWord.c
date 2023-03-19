#include "revertEveryWord.h"

int getWord(char *beginSearch, WordDescriptor *word) {
    word->begin = findNonSpace(beginSearch);

    if (*word->begin == '\0')
        return 0;

    word->end = findSpace(word->begin);

    return 1;
}

int getWordReverse(char *rbegin, char *rend, WordDescriptor *word) {
    word->end = findNonSpaceReverse(rbegin, rend) + 1;

    if (word->end == rend + 1)
        return 0;

    word->begin = findSpaceReverse(word->end, rend) + 1;

    return 1;
}

void swap(void *a, void *b, int size) {
    char *pA = a;
    char *pB = b;
    for (int i = 0; i < size; i++) {
        char t = *(pA + i);
        *pA = *pB;
        *pB = t;
    }
}

void revert(WordDescriptor word) {
    for (char *begin = word.begin, *end = word.end - 1; end > begin; begin++, end--)
        swap(begin, end, sizeof(*begin));
}

void revertEveryWord(char *s) {
    char *beginSearch = s;

    WordDescriptor word;

    while (getWord(beginSearch, &word)) {
        revert(word);

        beginSearch = word.end;
    }
}

void test_revertEveryWord() {
    char s1[] = "";
    revertEveryWord(s1);
    ASSERT_STRING("", s1);

    char s2[] = "a";
    revertEveryWord(s2);
    ASSERT_STRING("a", s2);

    char s3[] = "abcd";
    revertEveryWord(s3);
    ASSERT_STRING("dcba", s3);

    char s4[] = "   abcd acd fghi   oplk 424242    ";
    revertEveryWord(s4);
    ASSERT_STRING("   dcba dca ihgf   klpo 242424    ", s4);
}