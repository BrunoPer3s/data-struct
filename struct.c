#include <stdio.h>
#include <stdlib.h>

#define tam 3

typedef struct aluno
{
  char nome[80];
  int matricula;
} Aluno;

void inicializa(int n, Aluno **tab);

void leAluno(int n, Aluno **tab, int i);

void imprimeAluno(int n, Aluno **tab, int i);

void retiraAluno(int n, Aluno **tab, int i);

void imprime_tudo(int n, Aluno **tab);

int main()
{
  Aluno *tab[tam]; // vetor de ponteiros para a estrutura aluno

  // inicializando o vetor com NULL
  inicializa(tam, tab);

  // cria um registro de aluno na posição desejada
  leAluno(tam, tab, 0);
  leAluno(tam, tab, 1);

  // imprime aluno
  imprimeAluno(tam, tab, 0);

  // retira o aluno no index desejado
  retiraAluno(tam, tab, 0);

  imprime_tudo(tam, tab);

  return 0;
}

void inicializa(int n, Aluno **tab)
{
  for (int i = 0; i < n; i++)
  {
    tab[i] = NULL;
  }
}

void leAluno(int n, Aluno **tab, int i)
{
  if (i >= n || i < 0)
  { // verifica se o índice i é válido
    printf("Erro: índice inválido.\n");
    return;
  }

  Aluno *p = (Aluno *)malloc(sizeof(Aluno)); // aloca memória para um novo aluno
  if (p == NULL)
  { // verifica se a alocação de memória foi bem-sucedida
    printf("Erro: memória insuficiente.\n");
    return;
  }

  printf("Digite o nome do aluno: \n");
  scanf("%s", p->nome); // lê uma string com até 80 caracteres (ignora o caractere de nova linha)
  printf("Digite a matricula do aluno: \n");
  scanf("%d", &(p->matricula)); // lê um número inteiro

  tab[i] = p; // armazena o ponteiro para o novo aluno na posição i do vetor
}

void imprimeAluno(int n, Aluno **tab, int i)
{
  if (i >= n || i < 0 || tab[i] == NULL)
  { // verifica se o índice i é válido e se o ponteiro não é nulo
    printf("Erro: posição invalida ou sem aluno.\n");
    return;
  }

  printf("Nome: %s\n", tab[i]->nome);
  printf("Matricula: %d\n", tab[i]->matricula);
}

void retiraAluno(int n, Aluno **tab, int i)
{
  if (i >= n || i < 0 || tab[i] == NULL)
  { // verifica se o índice i é válido e se o ponteiro não é nulo
    printf("Erro: posição inválida ou sem aluno.\n");
    return;
  }

  free(tab[i]);  // libera a memória alocada para o aluno na posição i
  tab[i] = NULL; // atribui NULL ao ponteiro na posição i
}

void imprime_tudo(int n, Aluno **tab)
{
  for (int i = 0; i < n; i++)
  {
    imprimeAluno(n, tab, i);
  }
}
