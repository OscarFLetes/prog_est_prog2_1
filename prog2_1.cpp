/* Autor OScar Eduardo FLetes Ixta, 17/03/22
	Programa que almacena las edades de un salon de clases de 10 alumnos 
	El programa calculara
		-La media 
		-Varianza 
		-Desviacion estandar
		-Mediana
		-Ordenar por edades
	
	Programa en lenguaje c que almacena las edades de un salon de 10 alumnos y calcula la media, varianza, desviacion estandar,
	mediana y ordenar por edades, con el uso de ciclos for, condicones y operaciones aritmeticas 
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022
	
	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo int, float
		* Operaciones aritmeticas  
		* Uso del ciclo for
		* Uso de condiciones
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras y flotantes, como declararlas, usar el ciclo for, condiciones, realizar operaciones 
	aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 1 variable del tipo int (edad del alumno),
	El programa almacena las edades de los alumnos de un salón de 10 alumnos y el programa calcula la Media, varianza, 
	desviacion estandar, la Media y ordena las edades de menor a mayor
	*/

#include<stdio.h>//libreria para c
#include<math.h>//libreria para constantes matenaticas
//Definiciones
#define MAX 10 //macros
int main(){
	int edades[MAX], aux, centro; // Variables enteras, los corchetes indican que es un arreglo
	float media,suma=0, var,desviacion,mediana;//Variables con decimal
	//Cuando se quiere recorrer todo el arrgelo, el ciclo for es la mejor opcion
	//Leer datos de lteclado para llenar el arreglo completo
	for(int i=0;i<MAX;i++){ //ciclo for
		printf("Introduce la edad del alumno #%d:", i);//imprime mensaje para inertar la edad del alumno, i es el contador de alumnos
		scanf("%d",&edades[i]);//lee el numero insertado por el teclado
	}
	//Imprimnir todo el arreglo
	printf("Listado de Alumnos\n");//imrpime mensaje
	for(int i=0;i<MAX;i++){ //ciclo for
		printf("Edad del alumno #%d: %d\n",i,edades[i]);//imprime el numero del alumno y la edad
	}
	//Calcular la media
	for(int i=0;i<MAX;i++){//ciclo for
		suma=suma+edades[i];//suma las edades
	}
	media=suma/MAX;//calcula la media
	printf("La media es %.2f\n",media);//imrpime la media
	//Varianza
	suma=0;//declarar la suma igual a 0
	for(int i=0;i<MAX;i++){//ciclo for
		suma=suma+pow(edades[i]-media,2);//suma la ptencia
		//pow, es para elevar un numero a potencia n, en este caso esta elevada al cuadrado (2)
	}
	var=suma/MAX;//calcula la varianza
	printf("La varianza es %.2f\n",var);//imprime el resultado de la varianza
	//Desviacion estandar
	desviacion=sqrt(var);//calcula la desviacion estyandar
	//sqrt, es para calcular raiz cuadrada
	printf("La desviacion estandar es %.2f\n",desviacion);//imprime el resultado de la desviacion
	
	//Ordenamiento del arreglo por el metodo de la burbuja
	for(int z = 1; z < MAX; ++z) {
      	for(int v = 0; v < (MAX - z); v++) {
         	if(edades[v] > edades[v+1]){
            	aux = edades[v];
            	edades[v] = edades[v + 1];
            	edades[v + 1] = aux;
			}
		}
    }	
	//Imprimnir todo el arreglo
	printf("Listado de Alumnos Ordenados\n");//imrpime mensaje
	for(int i=0;i<MAX;i++){//ciclo for
		printf("Edad del alumno #%d: %d\n",i,edades[i]);//imprime el numero del alumno y la edad ya ordenaado
	}
	//La mediana
	if(MAX%2==0){//condicion, si MAX es par
		centro=MAX/2;//dividir MAX entre dos
		mediana=(edades[centro]+ edades[centro-1])/2.0;//calcular la mediana 
	}
	else{//y si no es par...
		centro=MAX/2;//dividir MAX entre dos
		mediana=edades[centro];//calculo de la mediana
	}
	printf("La mediana es %.2f\n",mediana);// imprime el resultado de la mediana
	
	return 0;
}
