 Tarea N4  


#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[20];
    int i, j,k,x,pot=0;
    printf("Escribe tu palabra: ");
    gets(palabra);
    k=strlen(palabra);

//estos for son para ordenar las letras en ascii de menor a mayor
for (i=1; i<k; i++){
        for (j=0 ; j<k - 1; j++){
               if (palabra[j] > palabra[j+1]){
                    x = palabra[j];
                    palabra[j] = palabra[j+1];
                    palabra[j+1] = x;
                    }
                    }
 }
//AQUI VEO LAS COINCIDENCIAS, para que un conjunto de letras pueda ser palindromo deben tener "largo/2=entero" identidades
 for (i=0;i<k;i++){

    if (palabra[i]==palabra[i+1]){
        pot=pot+1;
        i++;
    }

 }
// aqui estan los resultados de los if (calor de pot) como se dijo anteriormente si pot = largo/2 (osea k)
  es palindromo
 if (pot==k/2){
            printf("\n1\n");
        }
 else {

    printf("\n0\n");
 }
 return 0;
 }
