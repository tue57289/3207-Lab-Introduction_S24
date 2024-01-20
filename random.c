#include <stdio.h>
#include <stdlib.h>

char randchar() {

    int a = 65;
    int random = rand() % 26;

    char letter = a + random;
    return letter;
}