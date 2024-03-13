#include "matematica.h"
#include <stdio.h>

void main(){
	float angulo_radianos; //Criando variavel para armazenar o angulo em radianos
	printf("Digite o angulo em radianos: "); //Pedindo para o usuario digitar o angulo em radianos
	scanf("%f", &angulo_radianos); //Lendo o angulo em radianos
	printf("Seno: %f\n", calcular_seno(angulo_radianos));
	printf("Cosseno: %f\n", calcular_cosseno(angulo_radianos));
	printf("Tangente: %f\n", calcular_tangente(angulo_radianos));
}