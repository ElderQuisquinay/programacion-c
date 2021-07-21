/*******************************************************************************
Nombre: Elder Antonio Quisquinay Mazate
Carnet: 2019215 
Fecha: 03/09/2019
Practica no.3
******************************************************************************/
#include <stdio.h> //es una libreria 
int main() { // es la funcion main
	printf("\nNúmero par o impar");/*muestra en la pantalla 
	si es numero par o impar*/
	int a;// es una funcion con una variable entera
	printf("\nIngrese el número:",163);// muestra ingrese el numero
	scanf("%d",&a);//es la funcion que nos ayuda a seleccionar el numero 
	
	if(a%2==0){ //es una funcio que nos ayuda a comparar si es par o impar
		printf("\nEl número es par");/*si es par muestra en
		pantalla el numero es par*/
	}
	else {/*si en la funcion if no es correcta
		esta nos ayuda aver que es lo que es*/
		printf("\nEl número es impar");/* si el numero es impar muestra
		en pantalla el numero es impar*/
	}
	printf("\n");//muestra un espacio
	printf("\n");//muestra un espacio
	printf("\n");//muestra un espacio
	printf("\n");//muestra un espacio
	printf("\n---------------------------------");	//muestra ------------------------						
	printf("\nNúmero negativo o positivo");/*muestra en la pantalla 
	negativo o positivo*/
	
	int b;// es una funcion con una variable entera
	printf("\nIngrese el número:");// muestra en pantalla ingresar un numero
	scanf("%d",&b);//muertra un espacio donde podemos colocar un numero
	
	if (b<0){// nos ayuda aver si el numero es menor que 0
		printf("\nEl número es negativo");/*si el numero es menor que 0 
		muestra en pantalla el numero es negativo*/
	}
	else { // muestra lo que if no es 
		printf("\nEl número es positivo");/*muestra en pantalla 
		cuando el numero es positivol*/
	}
	return 0; //fin de la funcion main
	
	
}

