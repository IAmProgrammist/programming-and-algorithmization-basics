#include "isLexicographicalOrder.h"

void test_isLexicographicalOrder() {
    ASSERT_BOOL(true, isLexicographicalOrder(""));
    ASSERT_BOOL(true, isLexicographicalOrder("    "));
    ASSERT_BOOL(true, isLexicographicalOrder("a b c d e f   g h    i "));
    ASSERT_BOOL(true, isLexicographicalOrder("a a c d e f   g h    i "));
    ASSERT_BOOL(true, isLexicographicalOrder("zw"));
    ASSERT_BOOL(false, isLexicographicalOrder("z         w"));
    ASSERT_BOOL(true, isLexicographicalOrder("aa ab ac ad"));
    ASSERT_BOOL(false, isLexicographicalOrder("aaz aaw ac ad"));
}

bool isLexicographicalOrder(char *s) {
    WordDescriptor lastWord;
    if (!getWord(s, &lastWord))
        return true;

    while (true) {
        WordDescriptor currentWord;
        if (!getWord(lastWord.end, &currentWord))
            return true;
        else if (strcmpWords(lastWord, currentWord) > 0)
            return false;

        lastWord = currentWord;
    }
}