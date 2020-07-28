/*
Aula 3 -- varialvel Float 
*/
#include <stdio.h> //
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float n1,n2,media;
	
	printf("digite a 1° nota do aluno:\n");
	scanf("%f",&n1);
	
	printf("digite a 2° nota do aluno:\n");
	scanf("%f",&n2);
	
	media = (n1+n2)/2;
	
	printf("nota 1 = %.2f nota 2 = %.2f \n media entre as notas: %.2f",n1,n2,media);
	
	return 0;
}
