//ESCRIBE UN PROGRAMA QUE RECIBE UN NUMERO
//ENTERO N DEL USUARIO E IMPRIMA UNA 
//ESCALINATA DE N PISOS DE ASTERISCOS

#include <stdio.h>

int main (){
    int n;
    int i;
    int j;
    puts("Ingresa un numero");
    scanf("%d", &n);

    //Ascendente 
    puts("Ascendente");
    for(i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    //Descendente
    puts("Descendente");
    for(i=n; i>=1; i--){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    puts("FIN DEL PROGRAMA");
}