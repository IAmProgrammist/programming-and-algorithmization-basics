#include "printWordsInReversedOrder.h"

void printWord(WordDescriptor descriptor);

void getBagOfWords(BagOfWords *bag, char *s) {
    *bag = (BagOfWords) {{}, 0};
    WordDescriptor word = {NULL, s};
    while (getWord(word.end, &word))
        bag->words[bag->size++] = (WordDescriptor) {word.begin, word.end};
}

int bagOfWordsComparator(const void *wordA, const void *wordB) {
    return strcmpWords(*((WordDescriptor*) wordB), *((WordDescriptor*) wordA));
}

void printWordsInReversedOrder(char *s) {
    BagOfWords bag;
    getBagOfWords(&bag, s);

    qsort(&bag.words, bag.size, sizeof(WordDescriptor), bagOfWordsComparator);

    for (int i = 0; i < bag.size; i++) {
        printWord(bag.words[i]);
        printf("\n");
        fflush(stdout);
    }
}

void printWord(WordDescriptor descriptor) {
    for(; descriptor.begin < descriptor.end; descriptor.begin++)
        printf("%c", *descriptor.begin);
}
