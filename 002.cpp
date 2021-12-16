# include <stdio.h>
# include <stdlib.h>
# include <conio.h>


int main()
{ 

    int Idade, Nascimento, AnoAtual;

    printf("-------------------------------\n");
    printf("Programa para calcular a idade\n");
    printf("-------------------------------\n\n\n");

    printf("Que ano voce nasceu? ");
      scanf("%d", &Nascimento);

    printf("Em que ano estamos? ");
      scanf("%d", &AnoAtual);

    Idade = AnoAtual - Nascimento;

    printf("\n\nVoce tem: %d", Idade);
    printf(" Anos\n");
    Idade = 2057- Nascimento;

    printf("Em 2057 voce tera: %d", Idade);
    printf(" Anos\n");


    getch();
    return 0;

}






