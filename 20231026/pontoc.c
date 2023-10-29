#include "ponto.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa {
  char *nome;
  char *data_nascimento;
  char *cpf;
};

Pessoa *cria_pessoa(char *nome, char *data_nascimento, char *cpf) {
  Pessoa *p = (Pessoa *)malloc(sizeof(Pessoa));
  p->nome = (char *)malloc(strlen(nome) + 1);
  strcpy(p->nome, nome);
  p->data_nascimento = (char *)malloc(strlen(data_nascimento) + 1);
  strcpy(p->data_nascimento, data_nascimento);
  p->cpf = (char *)malloc(strlen(cpf) + 1);
  strcpy(p->cpf, cpf);
  return p;
}

void destroi_pessoa(Pessoa *p) {
  free(p->nome);
  free(p->data_nascimento);
  free(p->cpf);
  free(p);
}

void imprime_pessoa(Pessoa *p) {
  printf("Nome: %s\n", p->nome);
  printf("Data de Nascimento: %s\n", p->data_nascimento);
  printf("CPF: %s\n", p->cpf);
}