typedef struct pessoa Pessoa;

Pessoa *cria_pessoa(char *nome, char *data_nascimento, char *cpf);

void destroi_pessoa(Pessoa *p);

void imprime_pessoa(Pessoa *p);