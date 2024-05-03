/* ************************************************************************
PROGRAMA QUE DEVUELVE UN ROMBO CON EL Nº DE LADOS QUE DIGA EL USER
*************************************************************************** */

#include <stdio.h>
void dibujar (int numeroEspacios , int numeroCaracteres) {
  const char fig[]="@.o.";
  const int L=4;
  int pos;
 
    for(int i=0; i<numeroEspacios; i++)
      {
        printf ("%c",' ');
      }
  
    for(int i=0; i<numeroCaracteres; i++)
      {
        pos=i%L;
        printf ("%c",fig[pos]);
      }
 
    for(int i=numeroCaracteres-1; i>0; i--)
      {
        pos=(i-1)%L;
        printf ("%c",fig[pos]);
      }

}

int main () {
  int lado;
    printf("Por favor, inserte lado del Rombo:");
    scanf("%d",&lado);

  if (lado <=20 && lado>=1) {


    for (int i=lado; i>=0; i--)
      {
        dibujar (i, lado-i);
        printf("\n");
      }

  for (int i=1; i<=lado; i++)
      {
        dibujar (i, lado-i);
        if (i<lado)
          {
            printf("\n");
          }
      }
  }
  

}