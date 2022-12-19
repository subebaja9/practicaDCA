
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int
main (int argc, char *argv[])
{
  char opc;
  int n1,n2;
  printf (">>Calculadora<<\n");
  printf ("1. Suma\n");
  printf ("2. Resta\n");
  printf ("Introduzca una opción: ");
  scanf("%c",&opc);

  switch(opc){
    case '1': printf( "\n   Introduzca primer sumando: " );
              scanf( "%d", &n1);
              printf( "\n   Introduzca segundo sumando: " );
              scanf( "%d", &n2);
              printf( "\n   %d + %d = %d\n", n1, n2, n1 + n2 );
              break;

              /* Opción 2: Restar */
    case '2': printf( "\n   Introduzca minuendo: " );
              scanf( "%d", &n1);
              printf( "\n   Introduzca sustraendo: " );
              scanf( "%d", &n2);
              printf( "\n   %d - %d = %d\n", n1, n2, n1 - n2 );
              break;
  }
  return 0;
}
