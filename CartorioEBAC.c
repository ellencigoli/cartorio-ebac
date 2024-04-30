#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // bibiloteca de aloca��es de texto por regi�o
#include <string.h> // biblioteca respons�vel por cuidar das strings

int registro () // Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	// Inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// Final da cria��o de vari�veis/string
	
	printf("Digite o CPF a ser cadastrado: "); // Coletando informa��o do usu�rio
	scanf("%s",cpf); // %s refere-se as strings
	
	strcpy(arquivo, cpf); // Respons�vel por copiar os valores das strings
	
	FILE *file; // Cria o arquivo
	file = fopen (arquivo,"w"); // Cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); // Salva o valor da vari�vel 
	fclose (file); // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Abre o arquivo e atualiza
	fprintf(file,","); // Separa por virgula o conteudo
	fclose(file); // Fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); // Coletando informa��o do usu�rio
	scanf("%s",nome); // %s refere-se as strings
	
	file = fopen(arquivo, "a"); // Abre o arquivo e atualiza
	fprintf(file,nome); // Salva o valor da vari�vel
	fclose(file); // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Abre o arquivo e atualiza
	fprintf(file,","); // Separa por virgula o conteudo
	fclose(file); // Fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); // Coletando informa��o do usu�rio
	scanf("%s",sobrenome); // %s refere-se as strings
	
	file = fopen(arquivo, "a"); // Abre o arquivo e atualiza
	fprintf(file,sobrenome); // Salva o valor da vari�vel
	fclose(file); // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Abre o arquivo e atualiza
	fprintf(file,","); // Separa por virgula o conteudo
	fclose(file); // Fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); // Coletando informa��o do usu�rio
	scanf("%s",cargo); // %s refere-se as strings
	
	file = fopen(arquivo, "a"); // Abre o arquivo e atualiza
	fprintf(file,cargo); // Salva o valor da vari�vel
	fclose(file); // Fecha o arquivo
	
    system("pause");			
	
}

int consulta ()
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
	// Inicio cria��o de vari�veis/string
	char cpf [40]; 
	char conteudo [200];
	// Final da cria��o de vari�veis/string
	
	printf ("Digite o CPF a ser consultado: "); // Coletando informa��o do usu�rio
	scanf("%s", cpf); // %s refere-se as strings
	
	FILE *file; // Verifica o arquivo
	file = fopen(cpf,"r"); // Abre o arquivo e l�
	
	if(file == NULL)
	{
		printf ("N�o foi poss�vel abrir o arquivo, n�o localizado!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
			printf("\nEssas s�o as informa��es do usu�rio: ");
			printf("%s", conteudo);
			printf("\n\n");
	}
	
	system ("pause");
}

int deletar ()
{
	char cpf[40];
	
	printf("Digite o CPF a ser deletado: ");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf ("O usu�rio n�o se encontra no sistema!\n");
		system("pause");
	}	
}


int main ()
    {
	int opcao=0; //Definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
		system("cls");
	
    	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem
	
    	printf ("### Cart�rio da EBAC ###\n\n"); // Inicio do menu
    	printf ("Escolha a op��o desejada do menu:\n\n");
    	printf ("\t1 - Registrar nomes\n");
    	printf ("\t2 - Consultar nomes\n");
    	printf ("\t3 - Deletar nomes\n\n"); 
    	printf ("Op��o: "); // Fim do menu
	
    	scanf("%d", &opcao); // Armazenando a escolha do usu�rio
	
    	system("cls"); // Respons�vel por limpar a tela
    	
    	switch(opcao) // Inicio da sele��o do menu
		{
			case 1:
			registro (); // chamada de fun��es
			break;
			
			case 2:
			consulta ();
    		break;
    		
    		case 3:
    		deletar ();
    		break;
    		
    		default:
    		printf ("Essa op��o n�o est� dispon�vel!\n");
    		system("pause");
    		break;
		} // Fim da sele��o
		
    }
}
