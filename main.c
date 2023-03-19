#include "string/tasks/removeNonLetters.h"
#include "string/tasks/removeExtraSpaces.h"
#include "string/tasks/revertEveryWord.h"
#include "string/tasks/replaceDigitsBySpaces.h"
#include "string/tasks/replace.h"

int main() {
    test_removeNonLetters();
    test_removeExtraSpaces();
    test_revertEveryWord();
    test_replaceDigitsBySpaces();
    test_replace();
}