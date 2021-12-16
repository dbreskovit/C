# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{ 

    int An, AA, I, DI;

    printf("+-------------------------------------+\n");
    printf("Programa que analisa se voce pode votar\n");
    printf("+-------------------------------------+\n\n");


    printf("Digite seu ano de nascimento: ");
      scanf("%d", &An);

    I = 2021 - An;
    DI = 16 - I;

    if (I>=16)
    printf ("\nVOCE ESTA APTO A VOTAR!");

    else
      printf ("\nVOCE NAO ESTA APTO A VOTAR. FALTAM %d",DI,"ANOS");

    getch();
    return 0;

}
