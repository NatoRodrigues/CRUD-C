#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAMEMAIL 50
#define TAMUSER 50
#define TAMSENHA 50
#define TAMTABELA 4
#define TAMCPF 15

#define ERRO 0

#define FIM 6

#define INSERE 1
#define LIMPA 2
#define MOSTRA 3
#define ATUALIZA 4
#define DELETA 5
struct Dados{

    char CPF[TAMCPF];
    char Email[TAMEMAIL];
    char UserName[TAMUSER];
    char Senha[TAMSENHA];
};

int InsereDados (struct Dados tab[], int linha, int tammax){
  tammax = TAMTABELA;
  char CPF[TAMCPF];
  char Email[TAMEMAIL];
  char UserName[TAMUSER];
  char Senha[TAMSENHA];  
  
  do{
     printf("\nDigite seu Login: ");
        scanf(" %s", tab[linha].UserName);
     printf("\nDigite seu Email: ");
        scanf(" %s", tab[linha].Email);
     printf("\nDigite sua senha: ");
        scanf(" %s", tab[linha].Senha);
     printf("\nDigite seu CPF: ");
        scanf(" %s", tab[linha].CPF);   
      return !ERRO;
  if(linha > TAMTABELA){
    printf("\nLimite excedido. Exclua um dado.\n"); 
    }
  }while(linha > TAMTABELA);
    return ERRO;
  }

void ExibirDados (struct Dados tab[], int linhasUsadas){
  {
    int i;
  if(linhasUsadas == 0){ 
    printf("\nNão existe cadastro para ser deletado, exibido ou alterado.\n");
    
    } 
  else 
    printf("\n--------Dados cadastrados na memória--------\n");
  for (i = 0; i < linhasUsadas; i++){

    printf("Login: %s\n", tab[i].UserName);
    printf("Email: %s\n", tab[i].Email);
    printf("CPF: %s\n", tab[i].CPF);
    printf("Número do Cadastro: %d\n ", i);
  } 
  }
  }
int LimpaDados(struct Dados tab[], int linha){
  int linhasUsadas;
  int i;
  int cont;
  if (linha == ERRO){
       printf("Tabela vazia. Cadastre dados.");
      return ERRO;
    }
  else{
   
    for(linha = 0; linha < TAMTABELA; linha++)
          tab[i] = tab[linha];
        strcpy(tab[i].CPF,"");
        strcpy(tab[i].UserName,"");
        strcpy(tab[i].Email,"");
        strcpy(tab[i].Senha,"");
      
    }
    printf("Dados foram deletados ");
      return !ERRO;
    }
int menu (){
  int opcaoMenu;

  do{
    printf("\t\n******* Formzim em C *******\n");
      printf("\n1 - Inserir Dados\n");
      printf("2 - Limpar todos os dados da memória\n");
      printf("3 - Mostrar/Consultar Dados\n");
      printf("4 - Alterar Senha de Cadastro\n");
      printf("5 - Deletar um Cadastro especifico\n");
      printf("6 - Fim\n");
      scanf("%d", &opcaoMenu);
      if ( opcaoMenu < 1 || opcaoMenu > 6)
        printf("\nOpcao invalida, tente novamente\n");
    } while (opcaoMenu < 1 || opcaoMenu > 6);
  return opcaoMenu;
}

int AlterarCadastro(struct Dados tab[], int linhasUsadas){
   
    ExibirDados(tab, linhasUsadas);
      int num;
      int numCad;
  printf("\nQual o número do Cadastro que você quer deletar?");
          scanf("%i", &numCad);
     printf("\nDigte sua senha: ");
        scanf(" %s", tab[num].Senha);
      printf("\nRedigite sua antiga senha: ");
        scanf(" %s", tab[num].Senha);
      printf("\nDigite sua nova senha: ");
        scanf(" %s", tab[num].Senha);
      printf("\nSenha alterada com sucesso!");
        menu();

        if(num >= linhasUsadas || num < 0)
          printf("Não existem cadastros");
           return ERRO;
       
  }


void DeletaDado(struct Dados tab[], int linha){
int num;
int linhasUsadas;
  ExibirDados(tab, linhasUsadas);
  if(num < linhasUsadas || num < 0){
          printf("Invalido. Cadastro não existente!!!!");
    }
     else{printf("\nQual o número do Cadastro que você quer deletar?");
          scanf("%i", &num);   
        
          tab[num] = tab[linhasUsadas];
        strcpy(tab[num].CPF,"");
        strcpy(tab[num].UserName,"");
        strcpy(tab[num].Email,"");
        strcpy(tab[num].Senha,"");
      
        printf("\nDados foram deletados ");
    }
    }