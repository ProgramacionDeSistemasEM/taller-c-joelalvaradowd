#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
 
int main(int argc, char **argv){	
	int elementos = 0;
	char c = 0;
	
	
	//Aqui manejamos las opciones.
	//El argumento -p tiene un argumento, que es 
	//el numero de elementos a pedir (por eso el :)
	while ((c = getopt (argc, argv, "p:")) != -1){
		switch(c){
			case 'p':
				elementos = atoi(optarg);
				break;
			default:
				printf("Argumento invalido\n");
				exit(1);
		}
	}

	//Los resultados de sus calculos van en estas variables.
	//Puede declarar más variables si lo necesita.
	float sum = 0.0f;
	float max_imc = 0.0f;

	if(elementos<=0){
		printf("Numero de personas invalido\n");
		exit(1);
	}
	float arreglo[elementos];
	for(int i=0; i<elementos; i++){
		float peso, altura;
		printf("Peso: ");
		scanf("%f",&peso);
		if(peso<0){
			printf("Numero invalido\n");
			exit(1);
		}
		printf("Altura: ");
		scanf("%f",&altura);
		if(altura<0){
			printf("Numero invalido\n");
			exit(1);
		}
		float imc = peso/(altura*altura);
		arreglo[i]=imc;
	}
	for(int j=0; j<elementos; j++){
		sum += arreglo[j];
		if(arreglo[j] > max_imc){
			max_imc = arreglo[j];
		}
	}
	sum = sum/elementos;
	//No modifique estas lineas
	//Guarde los resultados en las 
	//variables sum y max_imc
	printf("\npromedio IMC: %.1f\n", sum);
	printf("maximo IMC: %.1f\n", max_imc);
}
