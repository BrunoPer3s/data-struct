# Exercício:
## Crie um tipo estruturado “aluno”. Um aluno deve possuir nome (cadeia com até 80 caracteres) e matrícula (número inteiro). Defina o novo nome “Aluno” para sua estrutura.
## Na função main crie um vetor de ponteiros para a estrutura aluno (chamado tab com 3 posições).
### Implemente as seguintes funções para manipular o vetor de ponteiros criado:

- Atribui NULL a todos os elementos do vetor tab de alunos de tamanho n

*void inicializa (int n, Aluno** tab);
<hr>

- Armazena os dados de um novo aluno em uma posição i do vetor de tamanho n

*void leAluno (int n, Aluno** tab, int i);
<hr>

- Imprime os dados de um aluno armazenado em uma posição i do vetor

*void imprimeAluno(int n, Aluno** tab, int i);
<hr>

- Remove os dados de um aluno. A posição i do aluno é passada como parâmetro

*void retiraAluno(int n, Aluno** tab, int i);
<hr>

- Imprime os dados de todos os alunos armazenados na tabela chamando a função imprimeAluno

*void imprime_tudo(int n, Aluno** tab);
<hr>
