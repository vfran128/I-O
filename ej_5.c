#include "stdio.h"

int main(void){
  int c;
  int espacios = 0;
  int lineas = 0;
  int letrasnumeros = 0;
  int tabulaciones = 0;
  while ((c = getchar()) != EOF) {
    if (c != 32 && c != 9 && c != 10 ) letrasnumeros++;
    if (c == 10) lineas++;
    if (c == 32 ) espacios ++;
    if (c == 9 ) tabulaciones ++;
  }
  printf("Hay %d letras/numeros \n",letrasnumeros);
  printf("Hay %d lineas \n",lineas);
  printf("Hay %d espacios \n",espacios);
  printf("Hay %d tabulaciones \n",tabulaciones);
  return 0;
}
