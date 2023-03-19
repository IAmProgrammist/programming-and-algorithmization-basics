#include "replace.h"

static char _stringBuffer[MAX_STRING_SIZE + 1];

void test_replace() {
    char s1[] = "";
    replace(s1, "", "");
    ASSERT_STRING("", s1);

    char s2[] = "abcd";
    replace(s2, "abcd", "");
    ASSERT_STRING("", s2);

    char s3[] = "I love cats , cats are amazing!";
    replace(s3, "cats", "dogs");
    ASSERT_STRING("I love dogs , dogs are amazing!", s3);

    char s4[] = "I love cats , cats are amazing!";
    replace(s4, "cats", "giraffes");
    ASSERT_STRING("I love giraffes , giraffes are amazing!", s4);

    char s5[] = "I love cats , cats is amazing!";
    replace(s5, "cats", "bee");
    ASSERT_STRING("I love bee , bee is amazing!", s5);
}

int strcmpWords(WordDescriptor w1, WordDescriptor w2) {
    while (w1.begin != w1.end &&
           w2.begin != w2.end &&
           *w1.begin == *w2.begin) {
        w1.begin++;
        w2.begin++;
    }
    char endWordChar1 = (isspace(*w1.begin)) ? '\0' : *w1.begin;
    char endWordChar2 = (isspace(*w2.begin)) ? '\0' : *w2.begin;
    return endWordChar1 - endWordChar2;
}

void replace(char *source, char *w1, char *w2) {
    size_t w1Size = strlen(w1);
    size_t w2Size = strlen(w2);
    WordDescriptor word1 = {w1, w1 + w1Size};
    WordDescriptor word2 = {w2, w2 + w2Size};
    char *readPtr, *recPtr;
    if (w1Size >= w2Size) {
        readPtr = source;
        recPtr = source;
    } else {
        copy(source, source + strlen(source) + 1, _stringBuffer);
        readPtr = _stringBuffer;
        recPtr = source;
    }

    while (*readPtr != '\0')
        if (isspace(*readPtr))
            *recPtr++ = *readPtr++;
        else {
            WordDescriptor word;
            getWord(readPtr, &word);
            if (strcmpWords(word, word1) == 0) {
                recPtr = copy(word2.begin, word2.end, recPtr);
            } else {
                recPtr = copy(word.begin, word.end, recPtr);
            }
            readPtr = word.end;
        }

    *recPtr = '\0';
}