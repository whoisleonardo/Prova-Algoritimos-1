#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	system("color 0C");
	
	float diaria, dias, frigobar, vt, imposto,total,imp;
	
	printf("\n Informe o valor da diaria:");
	scanf( "%f", &diaria);
	
		printf("\n Informe o numero de dias:");
	scanf( "%f", &dias);
	
		printf("\n Informe o consumo do frigobar (Informe 0 caso não haja consumo):");
	scanf( "%f", &frigobar);
	
	vt=diaria*dias;
	imp=(vt+frigobar)*0.035;
	total=(vt+frigobar+imp);
	
	printf("\n Valor total a pagar é: %.2f",total);
		
	
}
