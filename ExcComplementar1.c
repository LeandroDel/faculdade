#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main()
{
	
	float prod, parcela, valor;
	int pag;

	setlocale(LC_ALL, "Portuguese");

	printf ("Entre com o valor do produto: ");
	scanf ("%f", &prod);
	
	do{
	
	printf ("\n");
	printf ("1 - � vista em dinheiro ou cheque, recebe 15%% de desconto. \n");
	printf ("2 - � vista no cart�o de cr�dito, recebe 10%% de desconto. \n");
	printf ("3 - Em duas vezes, valor sem juros. \n");
	printf ("4 - Em tr�s vezes, juros de 20%%. \n\n");
	printf ("Escolha uma das formas de pagamento a cima: ");
	scanf ("%d", &pag);
	
	if ( pag == 1 ){
		valor = prod - (prod*0.15);
		printf ("\nA forma de pagamento escolhida foi � vista em dinheiro ou cheque, o valor final � de: %5.2f \n\n", valor);
		}
		
		else
			if ( pag == 2){
				valor = prod - (prod*0.10);
				printf ("\nA forma de pagamento escolhida foi � vista no cart�o de cr�dito, o valor final � de: %5.2f \n\n", valor);
			}
			
			else
				if ( pag == 3){
					valor = prod;
					parcela = valor/2;
					printf ("\nA forma de pagamento escolhida foi em duas vezes, o valor final � de: %5.2f, e o valor das parcelas � de: %5.2f \n\n", valor, parcela);
				}
				
				else
					if ( pag == 4){
						valor = prod + (prod*0.20);
						parcela = valor/3;
						printf ("\nA forma de pagamento escolhida foi em 3 vezes, o valor final � de: %5.2f, e o valor das parcelas � de %5.2f \n\n", valor, parcela);
					}
					
				else
					printf ("\nOp��o inv�lida, tente novamente \n\n");
					
 	}while ( pag != 1 && pag != 2 && pag != 3 && pag != 4);
	
	system ("pause");
	
}	
