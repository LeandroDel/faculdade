#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
	
	int x, y, i, soma=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf ("Entre com o valor de X: ");
	scanf ("%d", &x);
	printf ("\nEntre com o valor de Y: ");
	scanf ("%d", &y);
	
	if (x < y){
		for (i=x+1; i<y; i++){
			if (i%2!=0);{
			soma=soma+i;
			printf ("\n%d\n", soma);}
		}
	}
	else{
		for(i=y+1; i<x; i++){
			if (i%2!=0);{
			soma=soma+i;
			printf ("\n%d\n", soma);}
		}
	}

	system ("pause");
	
}
