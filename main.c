#include<stdio.h>
#define DISCIPLINAS 2 //DEFINE => Faz alteração de de uma instrução qualquer
#define MAXALUNOS 2  //Palavra reservado no C, para colocar uma constante


//typedef int nomeQueQuero;
//TYPEDEF => Muito usado no ESTRUCT 




/*                ***FAZ PARTE DO EXEMPLO 03****
typedef struct {
  int codDisciplina;
  TAluno aluno[MAXALUNOS];
}TAluno;
*/


//Declaração das variaveis do STRUCT
struct TAluno {
  int matricula;
  float notas[3];
  float media;
};

struct TDisciplina {
  int codDisciplina[DISCIPLINAS];;
  struct TAluno aluno[MAXALUNOS];
}; /*O struct TDisciplina é um vetor que vai conter o VETOR TAluno. 
Nesse caso, a codDisciplina = matemática vai conter todos os alunos da turma na disciplina e vai repetir o STRUCT TAluno em todas as novas DISCIPLINAS. Imagino que seja o a representação estruturada do que seria uma matriz tridimensional 
*/

//INICIO
int main(void) {

  /*
// ***TERCEIRO EXEMPLO - EX03***
//USANDO STRUCT COM OUTRO STRUCT
struct TDisciplina materia;//Nome da disciplina
for (int i1 = 0; i1 < DISCIPLINAS; i1++){
  printf("Código da disciplina:");
  scanf("%d", &materia.codDisciplina[i1]);
  printf("\n");
  //  ***CRIANDO VETORES DE ESTRUTURAS NO EXEMPLO 03***
  for (int i = 0; i < MAXALUNOS; i++){
    printf("Cadastrando Aluno %d\n", i+1);
    printf("Digite a Matricula: ");
    scanf("%d", &materia.aluno[i].matricula);
    printf("Cadastando as notas:\n");
    for (int j = 0; j < 3; j++){
      printf("Digite a nota %d: ", j+1);
      scanf("%f", &materia.aluno[i].notas[j]);
    }
    
    //CALCULANDO A MÉDIA
    for (int cont = 0; cont < 3; cont++){
      materia.aluno[i].media = materia.aluno[i].media + materia.aluno[i].notas[cont];
    }
    printf("\n");
  }
}
//MOSTRANDO AS MÉDIAS
printf("***RESULTADOS***\n");
for (int j = 0; j < DISCIPLINAS; j++){
  printf("Médias das disciplina: %d\n", materia.codDisciplina[j]);
  for (int i = 0; i < MAXALUNOS; i++){
    printf("MATRICULA: %d\n", materia.aluno[i].matricula);
    printf("MÉDIA: %.2f\n", materia.aluno[i].media/3);
    printf("\n");
  }  
}
//FIM DO VETOR



*/








/*   *******EXEMPLO DE INTRODUÇÃO **********
  //int matricula = 90; (**SUBSTITUÍDO PELO ESTRUCT**)
  //float notas[3] = {3.7, 8.9, 9.5};  (**SUBSTITUÍDO PELO ESTRUCT**)
  //float media = 0;  (**SUBSTITUÍDO PELO ESTRUCT**)
*************/









  struct TAluno novoAluno;
  struct TAluno novoAluno2;//novoAluno é uma nova variável do tipo TAluno



//   ***SEGUNDO EXEMPLO - EX02***
//CRIANDO VETORES DE ESTRUTURAS
  struct TAluno vetorAlunos[MAXALUNOS];
  for (int i = 0; i < MAXALUNOS; i++){
    printf("Cadastrando Aluno %d\n", i+1);
    printf("Digite a Matricula: ");
    scanf("%d", &vetorAlunos[i].matricula);
    printf("Cadastando as notas:\n");
    for (int j = 0; j < 3; j++){
      printf("Digite a nota %d: ", j+1);
      scanf("%f", &vetorAlunos[i].notas[j]);
    }
    
    //CALCULANDO A MÉDIA
    for (int cont = 0; cont < 3; cont++){
      vetorAlunos[i].media = vetorAlunos[i].media + vetorAlunos[i].notas[cont];
    }
    printf("\n");
  }
  //MOSTRANDO AS MÉDIAS
  for (int i = 0; i < MAXALUNOS; i++){
    printf("MATRICULA: %d\n", vetorAlunos[i].matricula);
    printf("MÉDIA: %.2f\n", vetorAlunos[i].media/3);
    printf("\n");
  }
//FIM DO VETOR

  novoAluno.matricula = 90;
  novoAluno.notas[0] = 3;
  novoAluno.notas[1] = 5.5;
  novoAluno.notas[2] = 7.3;

  for (int i = 0; i < 3; i++){
    novoAluno.media = novoAluno.media + novoAluno.notas[i];
  }
  novoAluno.media = novoAluno.media / 3;
  for(int i = 0; i < 3; i++){
    novoAluno.media = novoAluno.media + novoAluno.notas[i];
  }
  novoAluno.media = novoAluno.media / 3; 
  printf("Aluno: %d\n", novoAluno.matricula);
  printf("Media é: %.2f\n\n", novoAluno.media);





  //STRUCT PARA O novoAluno2 
  novoAluno2.matricula = 91;
  novoAluno2.notas[0] = 5;
  novoAluno2.notas[1] = 6.5;
  novoAluno2.notas[2] = 7.5;
  //CALCULANDO MÉDIA
  for (int i = 0; i < 3; i++){
    novoAluno2.media = novoAluno2.media + novoAluno2.notas[i];
  }
  novoAluno2.media = novoAluno2.media / 3;
  //MOSTRANDO OS RESULTADOS 
  printf("Aluno: %d\n", novoAluno2.matricula);
  printf("Media é: %.2f\n", novoAluno2.media);

  return 0;
}