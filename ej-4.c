#include "stdio.h"

int main (void){
  int n;
  int suma = 0;
  while (scanf("%d" ,&n ) != EOF){
    suma += n;
  }
  printf("-%d-\n",suma);

  return 0;
}
