#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    printf("\tcomparador de dos numeros\n");
    float valor,valor2, valor3;
    printf("\n");
    printf("ingrese el primer número:");
    scanf("%f",&valor);
    printf("ingrese el segundo número:");
    scanf("%f",&valor2);
    printf("ingrese el tercer numero:");
    scanf("%f",&valor3);
    
    if(valor>valor2){
        printf("\nel primer numero es mayor");       
    }
        if(valor<valor2){
        printf("\nel segundo numero es mayor");    
    }
          if(valor==valor2){
        printf("\nlos dos numeros son iguales");            
    }
    return 0;
}
