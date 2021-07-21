/*******************************************************************************
Nombre: Elder Antonio Quisquinay Mazate
Carnet: 2019215 
Fecha: 19/08/2019
Practica no.2
******************************************************************************/
#include <stdio.h>//incluye una libreria estandar de entrada o salida
#include <stdlib.h>//incluye otra libreria "biblioteca estandar"


int main(int argc, char** argv) {//se crea la funcion main
	printf("      Establecimiento");//muestra "establecimiento"
	printf("\n   fundacion piolincito");//muestra "fundacion piolincito
	printf("\n");//es un salto de linea
	char a[10], b[10], c[20], i[20];//cre variables con varios caracteres
	printf("\ningresar nombre: ");//muestra "ingresar nombre"
	scanf("%s",&a);
/*%s es la variable que escogimos, y nos va servir un valor por ejemplo el nombre de : elder 
*/	
	printf("\ningresar carnet:");//muestra "ingrese carnet"
	scanf("%s",&b); /*%s es la variable que escogimos, y nos va servir un valor por ejemplo el carnet:2019215
	*/
	printf("\ningresar codigo:");//mmuestra "ingresar codigo"
	scanf("%s",&c);/*%s es la variable que escogimos, y nos va servir un valor
	por ejemplo el codigo:2019215
	*/
	printf("\ningresar clase:");//muestra "ingresar clase"
	scanf("%s",&i); 
	/*%s es la variable que escogimos, y nos va servir un valor
	por ejemplo  clase: tecnologia
	*/
	
	int d, e, f, g, h;//se crea las variables de tipo entero
	float promedio;//se crea un valor flotante
	printf("\n ingresar la primera nota de unidad:");//muestra "ingresar la primeranota"
	scanf("%d",&d);/*%d es la variable que escogimos, y nos va servir un valor como
	por ejemplo nota: 80*/
	printf(" ingresar la segunda nota de unidad:");//muestra "ingrese la segunda nota de unidad"
	scanf("%d",&e);/*%d es la variable que escogimos, y nos va servir un valor
	por ejemplo segunda nota: 35*/
	printf(" ingresar la tercera nota de unidad:");//muestra  "tercera nota deunidad" 
	scanf("%d",&f);/*%d es la variable que escogimos, y nos va servir un valor 
	por ejemplo tercera nota de unidad:55*/
	printf(" ingresar la cuarta  nota de unidad:");//muestra "ingrese la cuarta nota de unidad"
	scanf("%d",&g);/*%d es la variable que escogimos, y nos va servir un valor
	como por ejemplo cuanta nota: 66*/
	printf(" ingresar la quinta  nota de unidad:");//muestra" ingrese la quinta nota"
	scanf("%d",&h); /*%d es la variable que escogimos, y nos va servir un valor
	como por ejemplo podemos colocar cualquer cantidad en el cuadrito que aparece
	a la par de ingrese la quita nota unidad*/
	

	printf("\nsus resultados fueron:");//muestra en pantalla "sus resultados fueron
	printf("\n..................................");
	printf("\n:                                ");
	printf("\n:nombre:%s",a);//muestra "el nombre que ingresamos"
	printf("\n:carnet:%s",b);//muestra "el carnet que ingresamos"
	printf("\n:codigo:%s",c);//muestra ""el codigo que ingresamos"
	printf("\n:clase: %s  ",i);//muestra "la clase queingresmos"
	promedio=(d+e+f+g+h)/5;//este es el promedio de las 5 unidades
	printf("\n:promedio final: %0.2f           ",promedio);// este es el promedio final
	printf("\n:                                ");
	printf("\n..................................");
	
	printf("\n.                                .");
	printf("\n.                                .");
	printf("\n.                                .");
	printf("\n.                                .");
	printf("\n.                                .");
	
/* aqui nos muestra una figura de piolin
	y nos muestra esta figura*/
	printf("\n.................p");
	printf("\n..............p..p...pp");
	printf("\n..............p.pp.pp");
	printf("\n.........pppp.......pppppp");
	printf("\n.......pp................pp");
	printf("\n.....pp........pp..........pp");
	printf("\n...pp........................pp");
	printf("\n..pp..........................pp");
	printf("\n..p...........................p.p");
	printf("\n.p................p.............p");
	printf("\n.p.............pppp..............p");
	printf("\n.p............pp.p...........p...p");
	printf("\n.p..........pppppp.......pppp....p");
	printf("\n.p.........ppppppp......pp..p....p");
	printf("\n..p........ppppp.p.....pppppp...p");
	printf("\n..pp.......p.....p....pppppp...pp");
	printf("\n...pp......p....p....pppp.....p");
	printf("\n....p......p...p.....p.......p");
	printf("\n....p......ppppp..........p..pp");
	printf("\n....pp...............ppp..p");
	printf("\n.....ppp.......ppppp......p");
	printf("\n.......ppp.....pp.......pp");
	printf("\n............pp.....pppppp.");
	printf("\n..........pp......p.p");
	printf("\n.......pppp........p.pp");
	printf("\n.........p..pp.....p...p");
	printf("\n....ppppp.p.......p..p.");
	printf("\n..pp...pppp.p......p...ppppppp");
	printf("\n..p......pppp.....p.pp........pp");
	printf("\n..p..........pppppppp.........p");
	printf("\n...pp.........p...p..........p");
	printf("\n....pppppppppp...ppppppppppp ..");
	printf("                               _ ");
	printf(".                               ");

	return 0; //nos muestra el final de la funcion main
}
