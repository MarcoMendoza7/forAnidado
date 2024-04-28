//ESCRIBE UN PROGRAMA QUE RECIBA UNA PALABRA POR
//TECLADO

//DE ACUERDO A LA LONGITUD DE LA PALABRA (N) QUE SE 
//INGRESO POR TECLADO IMPRIME UN CUADRO DE ASTERISCOS DE (N x N).

#include <stdio.h>
#include <string.h>

int main (){
    char p[]="palabra";
    int len;
    int i;
    int j;
    puts("Ingresa una palabra");
    scanf("%s", &p);
    len = strlen(p);
    printf("La longitud de:\'%s' es: %d\n", p, len);
    
    for(i=0; i<len; i++){
        for(j=0; j<len; j++){
            printf("*");
        }
        printf("\n");
    }
}