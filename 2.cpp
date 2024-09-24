#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	
	system("color 0C");
	
 	int mod,ram,valor;
 	
 	
 	printf("\n Informe o modelo do Notebook 1(para I5) 2(para 17) 3(para i9): ");
 	scanf("%d", &mod);
 	printf("\n Informe a quantidade de RAM: ");
 	scanf("%d", &ram);
	 
	 if(ram== 4 && mod==1){
 	printf("\n Valor: R$3.648,00", valor);}
 	else if(ram==8 && mod==1){	
	printf("\n Valor: R$4.379,00", valor);}

	
		 if(ram== 8&& mod==2){
 	printf("\n Valor: R$5.700,00", valor);}
 	else if(ram==16&& mod==2){	
	printf("\n Valor: R$5.999,00", valor);}
	
		
			

	
			 if(ram== 16&& mod==3){
 	printf("\n Valor: R$37.498,00", valor);}
 	else if(ram==32&& mod==3){	
	printf("\n Valor: R$38.819,00", valor);}

}


	

