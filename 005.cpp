# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{ 



    int cod;
    float Sa,Ns,Di,Au;

    printf("+---------------------------------------+\n");
    printf("Programa que calcula o aumento de salario\n");
    printf("+---------------------------------------+\n\n");

    printf("Digite seu codigo: ");
    scanf("%d", &cod);

    printf("Digite o seu salario:");
    scanf("%f", &Sa);


    if (cod == 101)
    {
      printf ("\nOla Gerente voce tera um aumento de 10%%");
      printf ("\n\nSalario Atual: R$%.2f",Sa);

      Ns = Sa + (Sa * 0.10);

      printf ("\nNovo Salario: R$%.2f",Ns);

    }

    else if (cod == 102)
    {
      printf ("\nOla Engenheiro voce tera um aumento de 20%%");
      printf ("\n\nSalario Atual: R$%.2f",Sa);

      Ns = Sa + (Sa * 0.20);

      printf ("\nNovo Salario: R$%.2f",Ns);


    }


    else if (cod == 103)
    {
      printf ("\nOla Tecnico voce tera um aumento de 30%%");
      printf ("\n\nSalario Atual: R$%.2f",Sa);

      Ns = Sa + (Sa * 0.30);

      printf ("\nNovo Salario: R$%.2f",Ns);

    }

    else 
    {

      printf ("\nVoce tera um aumento de 40%%");
      printf ("\n\nSalario Atual: R$%.2f",Sa);

      Ns = Sa + (Sa * 0.40);

      printf ("\nNovo Salario: R$%.2f",Ns);

    }


    getch();
    return 0;

}
