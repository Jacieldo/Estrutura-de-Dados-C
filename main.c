//Sequencia encadeada de elementos. Não permite elementos vazios
//Pode crescer ou dimunuir durante a execução do programa
//Pode-se manupular uma quantidade imprevisível de dados além de manipular dados de formatos diferentes

#include <stdio.h>
#include "ListaEstatica.h"

int main(void) {
  TLista lista1;
  TLista lista2;

  criarLista(&lista1);
  criarLista(&lista2);

  inserirFinal(&lista1, 3);
  inserirFinal(&lista1, 4);
  inserirFinal(&lista1, 6);

  imprimirLista(&lista1);
  return 0;
}