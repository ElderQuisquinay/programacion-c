/*******************************************************************************
Nombre: Elder Antonio Quisquinay Mazate
Carnet: 2019215 
Fecha: 03/09/2019
Practica no.3
******************************************************************************/
#include <stdio.h> //es una libreria 
int main() { // es la funcion main
	printf("\nN�mero par o impar");/*muestra en la pantalla 
	si es numero par o impar*/
	int a;// es una funcion con una variable entera
	printf("\nIngrese el n�mero:",163);// muestra ingrese el numero
	scanf("%d",&a);//es la funcion que nos ayuda a seleccionar el numero 
	
	if(a%2==0){ //es una funcio que nos ayuda a comparar si es par o impar
		printf("\nEl n�mero es par");/*si es par muestra en
		pantalla el numero es par*/
	}
	else {/*si en la funcion if no es correcta
		esta nos ayuda aver que es lo que es*/
		printf("\nEl n�mero es impar");/* si el numero es impar muestra
		en pantalla el numero es impar*/
	}
	printf("\n");//muestra un espacio
	printf("\n");//muestra un espacio
	printf("\n");//muestra un espacio
	printf("\n");//muestra un espacio
	printf("\n---------------------------------");	//muestra ------------------------						
	printf("\nN�mero negativo o positivo");/*muestra en la pantalla 
	negativo o positivo*/
	
	int b;// es una funcion con una variable entera
	printf("\nIngrese el n�mero:");// muestra en pantalla ingresar un numero
	scanf("%d",&b);//muertra un espacio donde podemos colocar un numero
	
	if (b<0){// nos ayuda aver si el numero es menor que 0
		printf("\nEl n�mero es negativo");/*si el numero es menor que 0 
		muestra en pantalla el numero es negativo*/
	}
	else { // muestra lo que if no es 
		printf("\nEl n�mero es positivo");/*muestra en pantalla 
		cuando el numero es positivol*/
	}
	return 0; //fin de la funcion main
	
	
}

