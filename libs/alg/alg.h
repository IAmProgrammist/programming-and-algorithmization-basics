#ifndef PROGRAMMING_AND_ALGORITHMIZATION_BASICS_ALG_H
#define PROGRAMMING_AND_ALGORITHMIZATION_BASICS_ALG_H

#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <ctype.h>


// Comment a
// comment b
// Comment lol
uint32_t getEvenOddCombination(uint16_t sh1, uint16_t sh2);

/** <p>Заголовок: <code>double myAbs(double a)</code>.</p>
 * <p>Назначение: возвращает модуль значения <code>a</code></p>
 * @param a значение из которого будет вычислен и возвращён модуль
 * @return модуль значения <code>a</code>
 */
double myAbs              (double a);

/** <p>Заголовок: <code>int sign(double x)</code>.</p>
 * <p>Назначение: возвращает -1, 0 или 1 в зависимости от знака значения <code>x</code></p>
 * @param x значение из которого вычисляется значение функции sign
 * @return 1, если <code>x</code> > 0
 * @return 0, если <code>x</code> = 0
 * @return -1, если <code>x</code> \< 0
 */
int sign(double x);

/**
 * <p>Заголовок: <code>int max2(int a, int b)</code>.</p>
 * <p>Назначение: возвращает максимальное из двух значений <code>a</code> и <code>b</code>
 * @param a первое значение
 * @param b второе значение
 * @return максимальное из двух значений <code>a</code> и <code>b</code>
 */
int max2(int a, int b);

/**
 * <p>Заголовок: <code>int max3(int a, int b, int c)</code>.</p>
 * <p>Назначение: возвращает максимальное из трёх значений <code>a</code>, <code>b</code> и <code>c</code>
 * @param a первое значение
 * @param b второе значение
 * @param c третье значение
 * @return максимальное из трёх значений <code>a</code>, <code>b</code> и <code>c</code>
 */
int max3(int a, int b, int c);

/**
 * <p>Заголовок: <code>double getD(int x1, int y1, int x2, int y2)</code>.</p>
 * <p>Назначение: возвращает расстояние между двумя точками A(<code>x1</code>; <code>y1</code>) и B(<code>x2</code>; <code>y2</code>)
 * @param x1 координата x точки A
 * @param y1 координата y точки A
 * @param x2 координата x точки B
 * @param y2 координата y точки B
 */
double getD(int x1, int y1, int x2, int y2);

/**
 * <p>Заголовок: <code>void solveX2(double a, double b, double c)</code>.</p>
 * <p>Назначение: выводит корни уравнения вида <code>a</code>x ^ 2 + <code>b</code>x + <code>c</code> = 0.
 * @param a первый коэффициент квадратного уравнения
 * @param b второй коэффициент квадратного уравнения
 * @param c третий коэффициент квадратного уравнения
 */
void solveX2(double a, double b, double c);

/**
 * <p>Заголовок: <code>bool isDigit(int x)</code>.</p>
 * <p>Назначение: возвращает “истина”, если символ <code>x</code> является цифрой, иначе – “ложь”
 * @param x символ, проверяемый на то, является ли он цифрой.
 * @return true если <code>x</code> - иифра
 * @return false если <code>x</code> - не цифра
 */
bool isDigit(char x);

// обменивает значения по адресам a и b размером n
void swap(void *a, void *b, size_t n);

/**
 * <p>Заголовок: <code>void swapFloat(float *a, float *b)</code>.</p>
 * <p>Назначение: обменивает значения по указателям <code>a</code>, <code>b</code>
 * @param a ссылка на первое значение
 * @param b ссылка на второе значение
 */
void swapFloat(float *a, float *b);

/**
 * <p>Заголовок: <code>void swapFloat(int *a, int *b)</code>.</p>
 * <p>Назначение: обменивает значения по указателям <code>a</code>, <code>b</code>
 * @param a ссылка на первое значение
 * @param b ссылка на второе значение
 */
void intSwap(int *a, int *b);

/**
 * <p>Заголовок: <code>void sort2(float *a, float *b)</code>.</p>
 * <p>Назначение: упорядочивает значения по адресам <code>a</code> и <code>b</code> таким образом, что значение по адресу <code>a</code> меньше значения по адресу  <code>b</code>
 * @param a ссылка на первое значение
 * @param b ссылка на второе значение
 */
void sort2(float *a, float *b);

/**
 * <p>Заголовок: <code>void sort2(int *a, int *b)</code>.</p>
 * <p>Назначение: упорядочивает значения по адресам <code>a</code> и <code>b</code> таким образом, что значение по адресу <code>a</code> меньше значения по адресу  <code>b</code>
 * @param a ссылка на первое значение
 * @param b ссылка на второе значение
 */
void intSort2(int *a, int *b);

/**
 * <p>Заголовок: <code>void sort3(float *a, float *b, float *c)</code>.</p>
 * <p>Назначение: упорядочивает значения по адресам <code>a</code>, <code>b</code> и <code>c</code> таким образом, что значение по адресу <code>a</code> меньше значения по адресу <code>b</code>; значение по адресу <code>b</code> меньше значения по адресу <code>c</code>
 * @param a ссылка на первое значение
 * @param b ссылка на второе значение
 * @param c ссылка на третье значение
 */
void sort3(float *a, float *b, float *c);

/**
 * <p>Заголовок: <code>void sort3(int *a, int *b, int *c)</code>.</p>
 * <p>Назначение: упорядочивает значения по адресам <code>a</code>, <code>b</code> и <code>c</code> таким образом, что значение по адресу <code>a</code> меньше значения по адресу <code>b</code>; значение по адресу <code>b</code> меньше значения по адресу <code>c</code>
 * @param a ссылка на первое значение
 * @param b ссылка на второе значение
 * @param c ссылка на третье значение
 */
void intSort3(int *a, int *b, int *c);

/**
 * <p>Заголовок: <code>bool isTrianglePossible(int a, int b, int c)</code>.</p>
 * <p>Назначение: возвращает “истина”, если треугольник <code>a</code>, <code>b</code>, <code>c</code> существует, иначе – “ложь”
 * @param a длина первой стороны
 * @param b длина второй стороны
 * @param c длина третьей стороны
 */
bool isTrianglePossible(int a, int b, int c);

/**
 * <p>Заголовок: <code>bool isTrianglePossible(int a, int b, int c)</code>.</p>
 * <p>Назначение: Назначение: возвращает: <ul>
<li>-1, если треугольник со сторонами a, b, c не существует</li>
<li>0, если треугольник со сторонами a, b, c остроугольный</li>
<li>1, если треугольник со сторонами a, b, c прямоугольный</li>
<li>2, если треугольник со сторонами a, b, c тупоугольный</li>
 </ul></p>
 * @param a длина первой стороны
 * @param b длина второй стороны
 * @param c длина третьей стороны
 * @return -1 если треугольник не существует
 * @return 0 если треугольник остроугольный
 * @return 1 если треугольник прямоугольный
 * @return 2 если треугольник тупоугольный
 */
int getTriangleTypeLength(int a, int b, int c);

/**
 * <p>Заголовок: <code>bool isPrimeHard(int n)</code>.</p>
 * <p>Назначение: возвращает “истина” если <code>n</code> - простое число, иначе – “ложь”.</p>
 * @param n число вид которого определяет функция
 * @return true если <code>n</code> - простое число
 * @return false если <code>n</code> - сложное число
 */
bool isPrimeHard(int n);

/**
 * <p>Заголовок: <code>bool isPrimeSqrt(int n)</code>.</p>
 * <p>Назначение: возвращает “истина” если <code>n</code> - простое число, иначе – “ложь”.</p>
 * @param n число вид которого определяет функция
 * @return true если <code>n</code> - простое число
 * @return false если <code>n</code> - сложное число
 */
bool isPrimeSqrt(int n);

/**
 * <p>Заголовок: <code>bool isPrimeSqrtHalf(int n)</code>.</p>
 * <p>Назначение: возвращает “истина” если <code>n</code> - простое число, иначе – “ложь”.</p>
 * @param n число вид которого определяет функция
 * @return true если <code>n</code> - простое число
 * @return false если <code>n</code> - сложное число
 */
bool isPrimeSqrtHalf(int n);

/**
 * <p>Заголовок: <code>bool isNumberPerfect(int n)</code></p>
 * <p>Назначение: возвращает “истина” если <code>n</code> - совершенное число, иначе – “ложь”.
 * @param n значение вид которого определяет функция
 * @return true если <code>n</code> - совершенное число
 * @return false если <code>n</code> - несовершенное число
 */
bool isNumberPerfect(int n);

/**
 * <p>Заголовок: <code>void printPerfectNumbers(int n)</code></p>
 * <p>Назначение: выводит все совершенные числа от 1 до <code>n</code> включительно
 * @param n значение до которого будут искаться совершенные числа
 */
void printPerfectNumbers(int n);

/**
 * <p>Заголовок: <code>int reverseNum(int n)</code></p>
 * <p>Назначение: возвращает число <code>n</code> в обратном порядке
 * @param n значение которое переворачивает функция
 * @return возвращает перевёрнутое значение <code>n</code>
 */
int reverseNum(int n);

/**
 * <p>Заголовок: <code>bool isNumberPalindrome(int n)</code></p>
 * <p>Назначение: возвращает “истина” если <code>n</code> – палиндром, иначе – “ложь”.
 * @return true, если <code>n</code> - палиндром
 * @return false, если <code>n</code> - не палиндром
 */
bool isNumberPalindrome(int n);

/**
 * <p>Заголовок: <code>int countPalindromeNumbers(int n)</code></p>
 * <p>Назначение: возвращает количество чисел-палиндромов от 1 до <code>n</code> включительно
 * @param n значение до которого будут проверяться палиндромы
 * @return количество палиндромов от 1 до <code>n</code> включительно
 */
int countPalindromeNumbers(int n);

/**
 * <p>Заголовок: <code>int sumDigits(int n)</code></p>
 * <p>Назначение: возвращает сумму цифр значения <code>n</code>
 * @param n значение цифры которого будут суммироваться
 * @return сумму цифр значения <code>n</code>
 */
int sumDigits(int n);

/**
 * <p>Заголовок: <code>bool isTicketHappy(int ticket)</code></p>
 * <p>Назначение: возвращает “истина” если номер билета автобуса <code>ticket</code> счастливый, иначе – “ложь”.
 * @param ticket номер билета
 * @return true, если билет счастливый
 * @return false, если билет обычный
 */
bool isTicketHappy(int ticket);

/** <p>Заголовок: <code>char getOctDigit(unsigned long long x, int at)</code></p>
 * <p>Назначение: возвращает цифру в восьмеричном виде числа <code>x</code> на позиции <code>at</code> с левого конца числа в двоичном коде.</p>
 * @param x значение в котором будет искаться цифра
 * @param at позиция цифры в числе <code>x</code>
 * @return цифру в восьмеричном виде числа <code>x</code> на позиции <code>at</code> с левого конца числа в двоичном коде.
 */
char getOctDigit(unsigned long long x, int at);

/** <p>Заголовок: <code>void printOct(unsigned long long x)</code></p>
 * <p>Назначение: выводит восьмеричное представление числа <code>x</code></p>
 * @param x значение которое нужно вывести в восьмеричной системе счисления
 */
void printOct(unsigned long long x);

unsigned long long deleteOctNumber(unsigned long long x, int removeDigit);

void swapPairBytes(unsigned long long *a);

/** <p>Заголовок: <code>void invertHex(unsigned long long *x)</code></p>
 * <p>Назначение: преобразует значение по адресу <code>x</code> переставляя в обратном порядке цифры значения по адресу <code>x</code> в обратном порядке в шестнадцатеричном представлении.</p>
 * @param x адрес по которому находится значение
 */
void invertHex(unsigned long long *x);

bool isBinPoly(unsigned long long x);

uint32_t getEvenOddCombination(uint16_t sh1, uint16_t sh2);

/** <p>Заголовок: <code>int getMaximumLength(unsigned long long x)</code></p>
 * <p>Назначение: возвращает максимальное количество подряд идущих единиц в двоичной записи числа <code>x</code>.</p>
 * @param x значение в котором будут подсчитываться подряд идущие единицы в двоичной записи
 * @return максимальное количество подряд идущих единиц в двоичной записи числа <code>x</code>.
 */
int getMaximumLength(unsigned long long x);

/** <p>Заголовок: <code>void cycleShift(unsigned long long *pX, int k)</code></p>
 * <p>Назначение: выполняет циклический сдвиг числа по адресу <code>pX</code> на <code>k</code> влево.</p>
 * @param pX адрес значение в котором будет выполняться сдвиг
 * @param k количество циклических сдвигов влево
 */
void cycleShift(unsigned long long *pX, int k);

/** <p>Заголовок: <code>unsigned long long removeEverySecondDigit(unsigned long long x)</code></p>
 * <p>Назначение: возвращает преобразованное число <code>x</code>, в котором удаляется каждая вторая цифра в двоичной записи числа, начиная со старших цифр.</p>
 * @param x число в котором будет удаляться каждая вторая цифра в двоичной записи
 * @return преобразованное число <code>x</code>, в котором удаляется каждая вторая цифра в двоичной записи числа, начиная со старших цифр.
 */
unsigned long long removeEverySecondDigit(unsigned long long x);

/** <p>Заголовок: <code>unsigned long long getInvertedByte(unsigned long long x)</code></p>
 * <p>Назначение: возвращает преобразованное значение <code>x</code> переставляя в обратном порядке байты значения <code>x</code> в обратном порядке</p>
 * @param x значение
 * @return преобразованное число <code>x</code>, в котором удаляется каждая вторая цифра в двоичной записи числа, начиная со старших цифр.
 */
unsigned long long getInvertedByte(unsigned long long x);

// вводит в массив array с консоли size элементов
void inputArray(int *const array, size_t size);

// выводит массив array размером size в консоль
void outputArray(const int *const array, size_t size);

// возвращает индекс первого с левого конца элемента массива array размером size, удовлетворяющий
// условию predicate первым из аргументов которого является searchElement
int linearSearchByPredicate(const int *const array, const size_t size, int searchElement, int (*predicate)(double, double));

// возвращает "истина" если a и b равны с точностью EPS = 0.0000001, иначе - "ложь"
int fcompare(double a, double b);

// возвращает "истина" если все элементы массива array размера size уникальны
bool areElementsUnique(const int *const array, size_t size);

// сортирует элементы массива array размером size по невозрастанию
void sortInsertion(int * const array, size_t size);

// обменивает значения по адресам a и b
void intSwap(int *a, int *b);

// возвращает индекс первого с левого конца элемента массива array размером size, удовлетворяющий
// условию predicate первым из аргументов которого является searchElement
size_t linearSearch(const int *const array, size_t size, int searchElement);

// возвращает "истина" если массив упорядочен по невозрастанию или неубыванию, иначе - "ложь"
bool isSorted(const int * const array, size_t arraySize);

// возвращает "истина" если массив упорядочен по неубыванию, иначе - "ложь"
bool isSortedNotDec(const int * const array, size_t arraySize);

// возвращает "истина" если массив упорядочен по невозрастанию, иначе - "ложь"
bool isSortedNotInc(const int * const array, size_t arraySize);

double midGeometric(const int * const array, size_t arraySize);

int gorner(const int *const coefficients, int cSize, int x);

bool compareByModulus(int a, int b);

void insertionSortByComparator(int *const array, size_t arraySize, bool (*comparator)(int, int));

bool isGeometricProgression(const int *const array, size_t arraySize);

int countDigits();

void printAsOct_(unsigned long long num);

void printAsOct(unsigned long long num);

int getGeometricalProgressionElement(int firstElement, int multiplier, unsigned elementNum);

static size_t linearRecSearch_(const int * const array, size_t currentIndex, size_t arraySize, int searchElement);

size_t linearRecSearchInArray(const int *const array, size_t arraySize, int searchElement);

int isSortedNonDec(int *a, size_t arraySize);

static int getFirstMinIndex_(int currentIndex, int currentMinValue, int currentMinIndex, size_t arraySize);

int getFirstMinIndex(int n);

static bool canFibbNumbersBeNeighbours_(int curA, int curB, int searchA, int searchB);

bool canFibbNumbersBeNeighbours(int searchA, int searchB);

void printEverythingBesidesDigits();

int getFirstElementOfArithmeticProgression(int element, int number, int delta);

static void printElementsOfSequence_(int lastElement, size_t size);

void printElementsOfSequence(size_t size);

bool any(int *array, size_t arraySize, bool (*predicate)(int));

bool all(int *array, size_t arraySize, bool (*predicate)(int));

ssize_t getFirstMinElementIndex_(const int *const array, ssize_t currentIndex, ssize_t arraySize);

ssize_t getFirstMinElementIndex(const int *const array, ssize_t arraySize);

void selectionSort(int *const array, ssize_t arraySize);

bool isUnique(long long *a, int n);

long long getSum(int *a, int n);

bool isNonDescendingSorted(int *a, int n);

#endif //PROGRAMMING_AND_ALGORITHMIZATION_BASICS_ALG_H
