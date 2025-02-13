#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
enum{EXPRESSO=1, CAPUCCINO, MACCIATO};
enum{SMALL=10, MEDIUM=20, TALL=30};

int menu() {
    int choice = 0;
    Coffee* myCup = NULL;

    printf("Bonjour ! Quel type de cafe souhaitez vous ?\n");
    printf("1: Expresso\n");
    printf("2: Capuccino\n");
    printf("3: Macciato\n");
    scanf("%d", &choice);
    myCup = CoffeeMachine(choice);
    showCup(*myCup);
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

void showCup(Coffee Cup) {
    printf("Hmmm, un cafe %s qui coute %.2f euros", Cup.name, Cup.price);
}

int main(void) {
    menu();
    return 0;
}