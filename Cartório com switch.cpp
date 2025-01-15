#include <stdio.h> //biblioteca de texto sem acento
#include <stdlib.h> //biblioteca de espa�o de mem�ria
#include <locale.h> //biblioteca de texto por regi�o
#include <string.h> // string � o conjunto de vari�veis e essa � a biblio que cuida das strings

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
	
	file = fopen (arquivo, "a"); // a = atualiza��es no artigo escrito
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
		printf ("Arquivo n�o localizado.\n");
	}
	
	while (fgets(conteudo, 200, file) != NULL);
	{
		printf ("Essas s�o as informa��es do usu�rio: \n");
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
	printf("Usu�rio n�o existe na base de dados.\n");
	system ("pause");
	}
	
}

int main ()
	{	
	int opcao=0; //Defini��o de vari�veis
	int repeticao=1;
	
	for (repeticao=1;repeticao=1;)
	
		{	
		system ("cls");
	
		setlocale(LC_ALL, "Portuguese"); //linguagem
		
		printf("### Cart�rio da EBAC ### \n\n");//t�tulo
		printf("Escolha a op��o desejeada do menu: \n\n");
	
		//op��es:
		printf ("\t1 - Registrar nomes\n");
		printf ("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n");
		printf ("Op��o: ");//fim do menu
			
		scanf ("%d", &opcao);// armazenar escolhas
		
		system ("cls"); //Limpar tela
	
		// atribui��o de op��es:
	
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
			printf("Op��o inv�lida.\n");
			system ("pause");
			break;
			
			}
	
	
	
	
	
		}
		
			printf("\n\tEsse software � de livre uso dos alunos");
	}
