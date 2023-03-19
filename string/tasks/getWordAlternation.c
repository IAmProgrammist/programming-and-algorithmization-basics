#include "getWordAlternation.h"

void test_getWordAlternation() {
    char s1[MAX_WORD_SIZE];
    getWordAlternation("", "", s1);
    ASSERT_STRING("", s1);

    char s2[MAX_WORD_SIZE];
    getWordAlternation("word", "", s2);
    ASSERT_STRING("word", s2);

    char s3[MAX_WORD_SIZE];
    getWordAlternation("a lot of different words", "", s3);
    ASSERT_STRING("a lot of different words", s3);

    char s4[MAX_WORD_SIZE];
    getWordAlternation("", "word", s4);
    ASSERT_STRING("word", s4);

    char s5[MAX_WORD_SIZE];
    getWordAlternation("", "a lot of different words", s5);
    ASSERT_STRING("a lot of different words", s5);

    char s6[MAX_WORD_SIZE];
    getWordAlternation("word", "another", s6);
    ASSERT_STRING("word another", s6);

    char s7[MAX_WORD_SIZE];
    getWordAlternation("a lot of different words", "another word", s7);
    ASSERT_STRING("a another lot word of different words", s7);

    char s8[MAX_WORD_SIZE];
    getWordAlternation("another word", "a lot of different words", s8);
    ASSERT_STRING("another a word lot of different words", s8);
}

void getWordAlternation(char *s1, char *s2, char *destination) {
    WordDescriptor word1, word2;
    bool isW1Found, isW2Found;
    char *beginSearch1 = s1, *beginSearch2 = s2;
    while ((isW1Found = getWord(beginSearch1, &word1)),
            (isW2Found = getWord(beginSearch2, &word2)),
            isW1Found || isW2Found) {
        if (isW1Found) {
            destination = copy(word1.begin, word1.end, destination);
            *destination++ = ' ';
            beginSearch1 = word1.end;
        }
        if (isW2Found) {
            destination = copy(word2.begin, word2.end, destination);
            *destination++ = ' ';
            beginSearch2 = word2.end;
        }
    }

    *(destination - 1) = '\0';
}