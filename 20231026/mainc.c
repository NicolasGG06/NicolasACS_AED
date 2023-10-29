#include "ponto.h"
#include <stdio.h>

int main() {
  Pessoa *p = cria_pessoa("Nicolas", "06.03.2005", "123.456.789-10");
  imprime_pessoa(p);
  destroi_pessoa(p);
  return 0;
}