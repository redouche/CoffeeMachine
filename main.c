#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
enum{EXPRESSO=1, CAPUCCINO, MACCIATO};
enum{SMALL=10, MEDIUM=20, TALL=30};

int menu() {
    int choice = 0;
    Coffee* myCup = NULL;

    printf("Serveur - Bonjour ! Quel type de cafe souhaitez vous ? Voici le menu :\n\n");
    printf("1 - Expresso\n");
    printf("2 - Capuccino\n");
    printf("3 - Macciato\n\n");
    printf("Votre choix : ");
    scanf("%d", &choice);
    CoffeeMachine(choice, &myCup);
    if (0 < choice && choice <4) {
        showCup(*myCup);
    };
    if (myCup != NULL) {
        free(myCup);
        myCup = NULL;
    };

}

void CoffeeMachine(int client_choice, Coffee** myCup) {
    *myCup = calloc(1, sizeof(Coffee));
    switch (client_choice) {
        case EXPRESSO:
            strcpy((*myCup)->name, "Expresso");
            (*myCup)->volume = SMALL;
            (*myCup)->price = 1.0f;
            (*myCup)->milk = false;
            (*myCup)->chocolate = false;
            (*myCup)->sugar = true;
            break;
        case CAPUCCINO:
            strcpy((*myCup)->name, "Capuccino");
            (*myCup)->volume = SMALL;
            (*myCup)->price = 2.0f;
            (*myCup)->milk = true;
            (*myCup)->chocolate = false;
            (*myCup)->sugar = true;
            break;
        case MACCIATO:
            strcpy((*myCup)->name, "Macciato");
            (*myCup)->volume = TALL;
            (*myCup)->price = 3.0f;
            (*myCup)->milk = true;
            (*myCup)->chocolate = true;
            (*myCup)->sugar = false;
            break;
        default:
            printf("Nous n'avons pas cette article !");
            break;
    }
}

void showCup(Coffee Cup) {
    printf("Vous - Hmmm, un cafe %s qui coute %.2f euros svp !", Cup.name, Cup.price);
}

int main(void) {
    menu();
    return 0;
}