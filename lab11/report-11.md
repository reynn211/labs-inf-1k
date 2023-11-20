# Отчет по лабораторной работе № 11
## по курсу "Прикладная математика и информатика"

Студент группы М8О-108Б-23 Явметдинов Максим Русланович

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Обработка последовательности литер в текстовом файле на языке C.
2. **Цель работы**: Разработка программы на языке программирования C для анализа и обработки вводимого текста.
3. **Задание:** Выделение первых и последних десятичных чисел строк.
4. **Идея, метод, алгоритм решения задачи**:
- Лексический анализ последовательности литер.
- Использование состояний и переходов для анализа последовательности.
- Определение первых и последних чисел.
- Вывод результатов обработки.
5. **Сценарий выполнения работы**:
- Чтение последовательности литер.
- Выделение десятичных чисел.
- Определение первых и последних (по счёту) десятичных чисел в строках.
- Вывод выделенных чисел.
6. **Протокол**:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum _kState {
	START,
	WORD,
    NUMBER,
    NEXT_WORD,
    WORD_N1,
    NEXT_WORD_N1,
    NUMBER_N1
} kState;

int isSpace(int ch);
int isPartOfNumber(int ch);
void addCharacter(char **str, char ch);

int main(void) {
    int ch;
    char *firstNumber = NULL;
    char *lastNumber = NULL;
    addCharacter(&firstNumber, '\0');
	kState state = START;
    while ((ch = getchar()) != EOF) {
        switch(state) {
            case START: {
                if (isPartOfNumber(ch)) {
                    state = NUMBER;
                } else if (isSpace(ch)) {
                    state = NEXT_WORD;
                } else {
                    state = WORD;
                }
            }
            break;
            
            case WORD: {
                if (isSpace(ch)) {
                    state = NEXT_WORD;
                }
            }
            break;

            case WORD_N1: {
                if (isSpace(ch)) {
                    state = NEXT_WORD_N1;
                }
            }
            break;

            case NEXT_WORD: {
                if (isPartOfNumber(ch)) {
                    addCharacter(&firstNumber, ch);
                    state = NUMBER;
                } else if (isSpace(ch)) {
                    state = NEXT_WORD;
                } else {
                    state = WORD;
                }
            }
            break;

            case NEXT_WORD_N1: {
                if (isPartOfNumber(ch)) {
                    free(lastNumber);
                    char *lastNumber = NULL;
                    addCharacter(&lastNumber, '\0');
                    addCharacter(&lastNumber, ch);
                    state = NUMBER_N1;
                } else if (isSpace(ch)) {
                    state = NEXT_WORD_N1;
                } else {
                    state = WORD_N1;
                }
            }
            break;

            case NUMBER: {
                if (isPartOfNumber(ch)) {
                    addCharacter(&firstNumber, ch);
                } else {
                    state = NEXT_WORD_N1;
                }
            }
            break;

            case NUMBER_N1: {
                if (isPartOfNumber(ch)) {
                    addCharacter(&lastNumber, ch);
                } else {
                    state = NEXT_WORD_N1;
                }
            }
            break;
        }
    }
    printf("%s %s\n", firstNumber, lastNumber);

    free(firstNumber);
    free(lastNumber);
}

void addCharacter(char **str, char ch) {
    int len = (*str) ? strlen(*str) : 0;
    *str = (char *)realloc(*str, len + 2);
    (*str)[len] = ch;
    (*str)[len + 1] = '\0';
}

int isPartOfNumber(int ch) {
    return ((ch >= '0' && ch <= '9') || ch == '-' || ch == '-');
}

int isSpace(int ch) {
	return (ch == ' ' || ch == ',' || ch == '\n' || ch == '\t');
}

```
7. **Выводы**: В этой работе я использовал простейшие приемы лексического анализа и диаграммы Тьюринга для эффективного моделирования и решения задачи на языке С, провел ее отладку и тестирование.
