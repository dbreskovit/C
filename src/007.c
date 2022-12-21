#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  float Af, Ap, pM;
  int A, MinA, MaxA, S, i, C, Cf; 
  

int main(void)
{
	
	setlocale(LC_ALL, "Portuguese");
	
	A, MaxA, S, i, Af, Ap, pM, C, Cf = 0;
	MinA = 1000;
	
	for(i = 1; i <= 50; i++){
		
	printf("+--------------------------+\n");
	

	printf("Informe a altura(cm): "); 
	  scanf("%d", &A);
	
	printf("Informe o sexo (0|1): "); 
	  scanf("%d", &S);
	
	printf("+--------------------------+\n");
	
	
	if(A>MaxA) MaxA = A;
	if(A<MinA) MinA = A;
	
	C++;
	
	
	
	if(S == 1){Af += A;Cf++;}
	
	else if(S == 0){pM += 1;}
		
		
		
	Ap += A;
		

}


	getch();
	system("cls");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");	
	printf("\nMaior altura: %d cm", MaxA);
	printf("\nMenor altura: %d cm", MinA);
	
	Af /= Cf;
	
	printf("\nM�dia altura mulheres: %.f", Af);
	
    Ap /= C;
	printf("\nM�dia altura popula��o: %.f", Ap);
	
	pM = (pM*100)/C;
	
	printf("\nPercentual de homens: %.f%% \n", pM);
	
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");


	getch();
	return 0;	

}
