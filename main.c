#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
enum{EXPRESSO=1, CAPUCCINO, MACCIATO};
enum{SMALL=10, MEDIUM=20, TALL=30};

int menu() {
    int choice = 0;
    Coffee* myCup = NULL;

    printf("Bonjour ! Quel type de cafe souhaitez vous ?");
    printf("1: Expresso");
    printf("2: Capuccino");
    printf("3: Macciato");
    scanf("%d", &choice);
    myCup = CoffeeMachine(choice);
    if (myCup != NULL) {
        free(myCup);
        myCup = NULL;
    };
}

Coffee* CoffeeMachine(int client_choice) {
    Coffee * Cup = NULL;
    Cup = malloc(sizeof(Coffee));
    switch (client_choice) {
        case EXPRESSO:
            strcpy(Cup->name, "Expresso");
            Cup->volume = SMALL;
            Cup->price = 1.0f;
            Cup->milk = false;
            Cup->chocolate = false;
            Cup->sugar = true;
            break;
        case CAPUCCINO:
            strcpy(Cup->name, "Capuccino");
            Cup->volume = SMALL;
            Cup->price = 2.0f;
            Cup->milk = true;
            Cup->chocolate = false;
            Cup->sugar = true;
            break;
        case MACCIATO:
            break;
        default:
            printf("Nous n'avons pas cette article !");
            break;
    }
    return Cup;
}

int main(void) {
    menu();
    return 0;
}