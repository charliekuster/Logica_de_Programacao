/*Defina as estruturas necessarias para armazenar o registro academico de alunos em uma universidade. 
O cadastro deve conter: nome, RA, data de matricula (dia, mes e ano), nome do curso, disciplinas cursadas e notas. 
Um aluno pode ter cursado ate 50 disciplinas, cada disciplina pode conter ate 10 notas, numero de faltas e
a data de termino da disciplina. Por fim, defina uma variavel (vetor) para armazenar o registro de 100 alunos.*/

#include<stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}data;

typedef struct{
    char disc[100];
    int notas[10];
    int faltas; 
    data t_curso;
}disciplinas;

typedef struct{
    char nome[50];
    int ra;
    data matricula;
    char curso[200];
    disciplinas cursando[50];
}registro;

void fRegistro(registro aluno[]){
    int i=0, j=0, n=0;
    for(i=0; i<3; i++){
        printf("Nome do aluno: ");
        gets(aluno[i].nome);
        printf("%s\n", aluno[i].nome);

        printf("RA do aluno: \n");
        scanf("%d", &aluno[i].ra);
        printf("ra do aluno: %d\n", aluno[i].ra);

        printf("Data de inicio do curso: \n");
        scanf(" %d %d %d", &aluno[i].matricula.dia, &aluno[i].matricula.mes, &aluno[i].matricula.ano);
        printf("data: %d/%d/%d\n", aluno[i].matricula.dia, aluno[i].matricula.mes, aluno[i].matricula.ano);

        printf("Nome do curso: ");
        getchar();
        fgets(aluno[i].curso, 200, stdin);
        printf("%s\n", aluno[i].curso);

        for(j=0; j<2; j++){
            printf("Diciplina: ");
            getchar();
            gets(aluno[i].cursando[j].disc);  
            printf("%s", aluno[i].cursando[j].disc);
            
            for(n=0; n<4; n++){
                printf("Notas da disciplina: ");
                scanf("%d", &aluno[i].cursando[j].notas[j]);
                printf("%d", aluno[i].cursando[j].notas[j]);
            }
            printf("Faltas: ");
            scanf("%d", &aluno[i].cursando[j].faltas);
            printf("%d", aluno[i].cursando[j].faltas);
            printf("Data: ");
            scanf("%d %d %d", &aluno[i].cursando[j].t_curso.dia, &aluno[i].cursando[j].t_curso.mes, &aluno[i].cursando[j].t_curso.ano);
            printf("%d/%d/%d", aluno[i].cursando[j].t_curso.dia, aluno[i].cursando[j].t_curso.mes, aluno[i].cursando[j].t_curso.ano);
        }

    }

}

int main(){
    registro aluno[3];
    fRegistro(aluno);
    return 0;
}
