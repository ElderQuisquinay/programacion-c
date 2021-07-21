#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
      printf("\n    Bienvendidos ");
      printf("\ncalculadora E.Q px5001");
     
       printf("\n");
    float resultado, v1, v2;
    int operacion;
    printf("\n1.suma\n2.resta\n3.multiplicacion\n4.division");
     printf("\n");
    printf("\ningrese el numero de la operacion que quiere realizar:");
    scanf("%d",&operacion);
     printf("\n");
   
        if(operacion==1){
            printf("ELIGIO SUMA");
    }
    if(operacion==2){
        printf("ELIGIO RESTA");
    }
    if(operacion==3){
        printf("ELIGIO MULTIPLICACION");
    }
    if(operacion==4){
        printf("ELIGIO DIVIDION"); }
    
    printf("\ningrese el primer valor:");
    scanf("%f",&v1);
    printf("\ningrese el segundo valor:");
    scanf("%f",&v2);
    if(operacion==1){
        resultado=v1+v2;
    }
    if(operacion==2){
        resultado=v1-v2;
    }
    if(operacion==3){
        resultado=v1*v2;
    }
    if(operacion==4){
        resultado=v1/v2; }
     printf("\n");

    printf("\nel resultado es: %.2f",resultado);
    return 0;
}

