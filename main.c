#include <stdio.h>
#include "main.h"

int menu() {
    int choix = 0;
    printf("Bonjour ! Quel type de café souhaitez vous ?");
    printf("1: Expresso");
    printf("2: Capuccino");
    printf("3: Macciato");
    scanf("%d", &choix);
}

int main(void) {
    Coffee Expresso = {"Reda", 10, 2, true, false, true};
    return 0;
}