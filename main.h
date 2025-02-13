#ifndef MAIN_H
#define MAIN_H
#include <stdbool.h>

typedef struct {
  char name[20];
  int volume;
  float price;
  bool milk;
  bool chocolate;
  bool sugar;
} Coffee;

void CoffeeMachine(int client_choice, Coffee** myCup);
int menu();
void showCup(Coffee Cup);

#endif //MAIN_H
