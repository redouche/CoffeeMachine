#include <stdio.h>
#include "main.h"
#include "stdlib.h"

enum{EXPRESSO=1, CAPUCCINO, MACCIATO};

int menu() {
    int choice = 0;
    printf("Bonjour ! Quel type de cafe souhaitez vous ?");
    printf("1: Expresso");
    printf("2: Capuccino");
    printf("3: Macciato");
    scanf("%d", &choice);
    CoffeeMachine(choice);
}

Coffee* CoffeeMachine(int client_choice) {
    Coffee * Cup = NULL;
    Cup = malloc(sizeof(Coffee));
    switch (client_choice) {
        case EXPRESSO:
            break;
        case CAPUCCINO:
            break;
        case MACCIATO:
            break;
        default:
            printf("Nous n'avons pas cette article !");
            break;
    }
}

int main(void) {
    menu();
    return 0;
}