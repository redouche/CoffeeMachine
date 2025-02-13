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

Coffee* CoffeeMachine(int client_choice);
int menu();

#endif //MAIN_H
