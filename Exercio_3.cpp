/*
	Exer Aula 3 
*/

#include <stdio.h>
#include <locale.h>


main(){
	setlocale(LC_ALL,"Portuguese");
	
	// int %i
	// float %f
	
	float n1,n2,n3,n4,media;
	
	printf("digite a 1° nota do aluno:\n");
	scanf("%f",&n1);
	printf("digite a 2° nota do aluno:\n");
	scanf("%f",&n2);
	printf("digite a 3° nota do aluno:\n");
	scanf("%f",&n3);
	printf("digite a 4° nota do aluno:\n");
	scanf("%f",&n4);
	
	media = (n1+n2+n3+n4)/4;
	
	printf("nota 1 = %.2f nota 2 = %.2f  \n",n1,n2);
	printf("nota 3 = %.2f nota 4 = %.2f  \n",n3,n4);
	printf("media entre as notas: %.2f \n",media);
	
	
}
