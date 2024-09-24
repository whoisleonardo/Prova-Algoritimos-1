#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	system("color 0C");
	
	float preco, tamanho, grama, kg, vt; 
	
	printf("\n Informe o preço do queijo:");
	scanf("%f", &preco);
	printf("\n Informe o tamnho da pizza 1(p) 2(m) 3(g) 4(f):");
	scanf("%f", &tamanho);
	if(tamanho==1){
	vt=preco/1000*15*6;}
	else if (tamanho==2){
	vt=preco/1000*15*8;}
	else if(tamanho==3){
	
		vt=preco/1000*15*10;
	}
	
	else if (tamanho==4){
	vt=preco/1000*15*12;
	}

printf("\n Custo do queijo será: %.3f", vt);	
}

	
	
