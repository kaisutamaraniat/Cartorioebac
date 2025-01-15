#include <stdio.h> //biblioteca de texto sem acento
#include <stdlib.h> //biblioteca de espaço de memória
#include <locale.h> //biblioteca de texto por região
#include <string.h> // string é o conjunto de variáveis e essa é a biblio que cuida das strings

int registro ()
{
	setlocale(LC_ALL, "Portuguese"); //linguagem
	
	char arquivo [40];
	char cpf[40];
	char nome [40];
	char sobrenome [40];
	char cargo [40];
	
	printf("Digite o CPF:\t");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); // copiar valores das strings
	
	FILE *file; // criar arquivos
	file = fopen (arquivo, "w"); // w = escrever artigo
	fprintf (file, cpf);
	fclose(file);
	
	file = fopen (arquivo, "a"); // a = atualizações no artigo escrito
	fprintf (file, ",");
	fclose (file);
	
	printf ("Digite o nome:\t");
	scanf ("%s", nome);
	
	file = fopen (arquivo, "a");
	fprintf (file, nome);
	fclose (file);
	
	printf("Digite o sobrenome:\t");
	scanf ("%s", sobrenome);
	
	file = fopen (arquivo, "a");
	fprintf (file, sobrenome);
	fclose (file);
	
	file = fopen (arquivo, "a");
	fprintf (file, ",");
	fclose (file);
	
	printf("Digite o cargo:\t");
	scanf ("%s", cargo);
	
	file = fopen (arquivo, "a");
	fprintf (file, cargo);
	fclose (file);
	
	
}
int consulta()
{
	setlocale(LC_ALL, "Portuguese"); //linguagem
	
	char cpf[40];
	char conteudo [200];
	
	printf("Digite o CPF:\t");
	scanf ("%s", cpf);
	
	FILE *file;
	file = fopen (cpf, "r") ; // r = ler arquivo existente
	
	if(file == NULL)
	{
		printf ("Arquivo não localizado.\n");
	}
	
	while (fgets(conteudo, 200, file) != NULL);
	{
		printf ("Essas são as informações do usuário: \n");
		printf ("%s", conteudo);
		printf ("\n\n");
	}
	system ("pause");
	
}

int deletar ()
{
	setlocale(LC_ALL, "Portuguese"); //linguagem
	
	char cpf [40];
	printf ("Digite o CPF.\t");
	scanf ("%s", cpf);
	
	remove (cpf);
	
	FILE *file;
	file = fopen (cpf, "r");
	
	if (file == NULL)
	{
	printf("Usuário não existe na base de dados.\n");
	system ("pause");
	}
	
}

int main ()
	{	
	int opcao=0; //Definição de variáveis
	int repeticao=1;
	
	for (repeticao=1;repeticao=1;)
	
		{	
		system ("cls");
	
		setlocale(LC_ALL, "Portuguese"); //linguagem
		
		printf("### Cartório da EBAC ### \n\n");//título
		printf("Escolha a opção desejeada do menu: \n\n");
	
		//opções:
		printf ("\t1 - Registrar nomes\n");
		printf ("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n");
		printf ("Opção: ");//fim do menu
			
		scanf ("%d", &opcao);// armazenar escolhas
		
		system ("cls"); //Limpar tela
	
		// atribuição de opções:
	
	switch (opcao)
			{
			case 1:
			registro ();
			break;
			
			case 2:
			consulta ();
			break;
			
			case 3:
			deletar ();
			break;
		
			
			default:
			printf("Opção inválida.\n");
			system ("pause");
			break;
			
			}
	
	
	
	
	
		}
		
			printf("\n\tEsse software é de livre uso dos alunos");
	}
