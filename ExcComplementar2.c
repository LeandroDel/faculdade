#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{
	
	float nota1, nota2, nota3, MA, ME;
	int ni, conceito;

	setlocale(LC_ALL, "Portuguese");

	printf ("Entre com o número de identificação do aluno: ");
	scanf ("%d", &ni);
	printf ("\nEntre com a nota 1 do aluno de número %d: ", ni);
	scanf ("%f", &nota1);
	printf ("\nEntre com a nota 2 do aluno de número %d: ", ni);
	scanf ("%f", &nota2);
	printf ("\nEntre com a nota 3 do aluno de número %d: ", ni);
	scanf ("%f", &nota3);
	printf ("\nEntre com a média dos exercícios do aluno de número %d: ", ni);
	scanf ("%f", &ME);
	
	MA = ((nota1 + nota2 * 2 + nota3 * 3 + ME)/7);
	
	if (MA >= 90)
		printf ("\nAluno %d \nNota 1 = %.2f\nNota 2 = %.2f\nNota 3 = %.2f\nMédia dos exercícios = %.2f\nMédia de aproveitamento = %.2f Aluno Aprovado Conceito: A\n\n", ni, nota1, nota2, nota3, ME, MA);
		
		else
			if (MA >= 75 && MA < 90)
				printf ("\nAluno %d \nNota 1 = %.2f\nNota 2 = %.2f\nNota 3 = %.2f\nMédia dos exercícios = %.2f\nMédia de aproveitamento = %.2f Aluno Aprovado Conceito: B\n\n", ni, nota1, nota2, nota3, ME, MA);
			
			else
				if (MA >= 60 && MA < 75)
					printf ("\nAluno %d \nNota 1 = %.2f\nNota 2 = %.2f\nNota 3 = %.2f\nMédia dos exercícios = %.2f\nMédia de aproveitamento = %.2f Aluno Aprovado Conceito: C\n\n", ni, nota1, nota2, nota3, ME, MA);
					
				else
					if (MA >= 40 && MA < 60)
						printf ("\nAluno %d \nNota 1 = %.2f\nNota 2 = %.2f\nNota 3 = %.2f\nMédia dos exercícios = %.2f\nMédia de aproveitamento = %.2f Aluno Reprovado Conceito: D\n\n", ni, nota1, nota2, nota3, ME, MA);
						
					else
						if (MA < 40)
							printf ("\nAluno %d \nNota 1 = %.2f\nNota 2 = %.2f\nNota 3 = %.2f\nMédia dos exercícios = %.2f\nMédia de aproveitamento = %.2f Aluno Reprovado Conceito: E\n\n", ni, nota1, nota2, nota3, ME, MA);
							
	system ("pause");
	
}
	
	
