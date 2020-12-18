#include <stdio.h>
#include <stdlib.h>


void main () {

  typedef struct Data {
    char Bez[50];
    double Preis;
  } struDataElm;

  typedef struct Elm {
    struct Elm* pNext;
    struct Data* pData;
  } struListElm;

  double Preis[10];
  for (int i = 0; i < 10; i++) {
  Preis[i] = rand() % 99990 + 10;
  }

  for (int i = 0; i < 10; i++) {
    printf("%g \n", Preis[i]);
  }

/*
    int Wert = 10;
    //printf("Wie viele Zahlen sollen generiert werden:\n");
    //scanf_s("%i", &Wert);
    int Preis[1000];
    for (int Condition = Wert; Condition < Wert + 1; Condition++) {
      Preis[Condition] = rand() % Wert + 1;
    }

    for (int Condition = Wert; Condition < Wert + 1; Condition++) {
      printf("%i \n", Preis[Condition]);
    }*/
}