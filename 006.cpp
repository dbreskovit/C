# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{ 


int Id,Dp,Cont;
float Sa,Ns;

printf("+---------------------+\n");
printf(" Programa show de bola\n");
printf("+---------------------+\n\n");

printf("INFORME SUA IDADE: ");
scanf("%d", &Id);


printf("INFORME OS DEPENDENTES: ");
scanf("%d", &Dp);


printf("INFORME O SALARIO: ");
scanf("%f", &Sa);



if (Id>49 && Dp> 3)
{
	system("cls");
    printf ("\n--------------------------------------------------");
    printf ("\n VOCE GANHARA UM AUMENTO DE 20%%");
    printf ("\n SALARIO ATUAL: R$%.2f",Sa);
    Ns = Sa + (Sa * 0.20);
    printf ("\n NOVO SALARIO: R$%.2f",Ns);
    printf ("\n--------------------------------------------------\n\n\n");
}   


else
{
    printf ("\nSEM AUMENTOS DISPONIVEIS!");
}  


    getch();
    return 0;

}