#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	
	int linha, coluna, x;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{

	printf ("Entre com um n�mero inteiro de 1 a 9: ");
	scanf ("%d", &x);	
	
	if ( x>=1 && x<=9)

		for (linha=1; linha<=x; linha++){
			for(coluna=1; coluna<=linha; coluna++)
				printf ("%d", linha);
			printf ("\n");
		}
	
		else
			printf ("\nErro, digite um n�mero v�lido!\n\n");
			
	}while ( x<=1 || x>=9);
	
	system ("pause");
	
}

