#include <stdio.h>
#include <string.h>
#include "Funcoes.h"

int main(void) {
  struct Dados tab[TAMTABELA];
  int i;
  int op;
  int linhasUsadas=0;
  op = !FIM;
  int linha=0;
  while (op != FIM){
      op = menu();
      switch (op){
        case INSERE : 
          if (InsereDados(tab, linhasUsadas, TAMTABELA) !=ERRO){
            linhasUsadas++;
            }     
          break;
        case LIMPA :
        if(LimpaDados(tab, linhasUsadas) !=ERRO){
           linhasUsadas=0;
          }
          break;
    
        case MOSTRA:
        ExibirDados(tab, linhasUsadas);
          break;

        case ATUALIZA:
        AlterarCadastro(tab, linhasUsadas);
          break;

  
        case DELETA:
        DeletaDado(tab, linhasUsadas);
          break;
        
        case FIM:
        printf("Programa encerrado");
          break;
         }
    }
  return 0;
  
  }