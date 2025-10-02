#include <stdio.h>

int main() {
	printf("Ola! Este programa recebe 2 notas de 6 alunos, calcula a media de cada um, mostra se esta aprovado, exame ou reprovado.\n ");
	
    int aluno = 1;
    int totalAprovados = 0, totalExame = 0, totalReprovados = 0;
    float nota1, nota2, mediaAluno, somaMedias = 0;
    
    while (aluno <= 6) {
        printf("\nDigite a primeira nota do aluno %d: ", aluno);
        scanf("%f", &nota1);
        printf("Digite a segunda nota do aluno %d: ", aluno);
        scanf("%f", &nota2);
        
        mediaAluno = (nota1 + nota2) / 2;
        somaMedias += mediaAluno;

        printf("Media do aluno %d: %.2f- ", aluno, mediaAluno);
        
        if (mediaAluno < 3.0) {
            printf("Reprovado\n");
            totalReprovados++;
        } else if (mediaAluno < 7.0) {
            printf("Exame\n");
            totalExame++;
        } else {
            printf("Aprovado\n");
            totalAprovados++;
        }

        aluno++;
    }

    printf("\nTotal de aprovados: %d\n", totalAprovados);
    printf("Total de exame: %d\n", totalExame);
    printf("Total de reprovados: %d\n", totalReprovados);
    printf("Media da classe = %.2f\n", somaMedias / 6);

    return 0;
}

