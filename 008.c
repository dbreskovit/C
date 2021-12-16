#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale (LC_ALL,"Portuguese");
	
	int P,U,i;
	float T,Pag,t;
	
	system ("cls");
	
	printf ("+-------------------+\n");
	printf ("     WEB MERCADO     \n"); 
	printf ("+-------------------+\n");
	printf ("   Pressione Enter   \n");
	getch  ();
	system ("cls");
	
	
  do
  {	
  
	printf ("+------------------------------------------+\n");
	printf ("  1-  FEIJ�O   1Kg     --->       R$ 6,00\n");
	printf ("  2-  ARROZ    1Kg     --->       R$ 4,92\n"); 
	printf ("  3-  MIOJO    85g     --->       R$ 5,10\n"); 
	printf ("  4-  FIL�     1Kg     --->       R$ 19,4\n");
	printf ("  5-  FRANGO   1Kg     --->       R$ 10,0\n");
	printf ("  6-  �LEO   900mL     --->       R$ 7,09\n"); 
	printf ("  7-  P�O      1Kg     --->       R$ 7,49\n"); 
	printf ("  8-  MA�A     1Kg     --->       R$ 6,40\n");
	printf ("  9-  �GUA   500mL     --->       R$ 5,00\n"); 
	printf (" 10-  CAF�     1Kg     --->       R$ 25,0\n");    
	printf ("+------------------------------------------+\n");	
	

	printf ("Digite o c�digo do produto: ");
	scanf  ("%d", &P);
	
	printf ("Digite quantas unidades:    ");
	scanf  ("%d", &U);
	
	
	if (P == 1)
	T = (6.00 * U) + T;
	
	
	else if (P == 2)
	T = (4.92 * U) + T;
	
	
	else if (P == 3)
	T = (5.10 * U) + T;
	
	
	else if (P == 4)
	T = (19.4 * U) + T;


	else if (P == 5)
	T = (10.0 * U) + T;

	
	else if (P == 6)
	T = (7.09 * U) + T;

	
	else if (P == 7)
	T = (7.49 * U) + T;

	
	else if (P == 8)
	T = (6.40 * U) + T;

	
	else if (P == 9)
	T = (5.00 * U) + T;
	
	
	else if (P == 10)
	T = (25.0 * U) + T;
	
	
	
	printf ("\nDeseja adicionar outro produto? [1-Sim; 2-N�o]\n");
	scanf  ("%d", &i);
	system ("cls");
  	
  } while (i==1);

	
	
	
	printf ("+------------------------------------------+\n");	
	printf ("           Total a pagar: R$ %.2f\n", T);
	printf ("+------------------------------------------+\n");
	printf ("Informe a quantia de dinheiro que voc� tem: R$");
	scanf ("%f", &Pag);
	system ("cls");
	
	
	t = (Pag - T);
	
	
	printf ("+------------------------------------------+\n");
	
	if (t < 0)
	printf ("      Faltam R$ %.2f para pagar a compra.\n", t*-1);
		
	else if (t > 0)
	printf ("             Troco de R$ %.2f.\n", t);

	else
	printf ("            Sem troco disponivel.\n");
	
	printf ("+------------------------------------------+\n");


	
	
	getch();
	system ("cls");
	printf ("Feito por: Diego Breskovit Morcelli.\n\n\n");
	

	return (0);	
}