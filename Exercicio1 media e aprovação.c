#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exercicio:
	Deve-se criar um programa que faça leitura de três notas, e adicionar uma
condicional para dizer se o aluno foi aprovado ou reprovado. */

//Função principal:
void main(){
	//Função de linguagem:
	setlocale(LC_ALL, "");

//Incluindo as Variaveis:
float nota1, nota2, nota3, media, soma;	
char name[50];	
	
	//Aprensentação do programa em cabeçalho:
	printf("Calculador de Media e Avaliador \n \n");
	printf("Neste excercicio se deve obter 3 notas de um determinado aluno, efetuar a media \ne o aluno sera aprovado apenas se a nota fora maior que 7 \n \n");
	printf("\n Este programa foi criado por Rafael Ramos, de Taubaté no dia 19/01/2023 \npara fins de exercício de fixação de matéria. \n \n");
	
	//Coletando Dados do usuário:
	printf("Escreva o nome do Aluno: ");
	scanf("%s", &name);
	printf("O nome do Aluno é %s e suas notas são: \n", name);
	printf("\n Nota da materia 1: ");
	scanf("%f", &nota1);
	printf("\n Nota da materia 2: ");
	scanf("%f", &nota2);
	printf("\n Nota da materia 3: ");
	scanf("%f", &nota3);

//apresentando informações ao usuário:
printf("As notas do(a) Aluno(a) %s são %.1f / %.1f / %.1f \n", name, nota1, nota2, nota3);

//Cálculo:
soma = (nota1 + nota2 + nota3);
media = (soma / 3);
printf("A media do(a) aluno(a) %s é %.1f", name, media);
	
	//Condicional de Aprovação:
	if(media >= 7){
		printf("\n \n O aluno %s foi APROVADO! \n \n", name);
	}else if(media <= 7){
		printf("\n \n O aluno %s foi REPROVADO! \n \n", name);
	}
//Fim do programa:	
system("pause");	
}
