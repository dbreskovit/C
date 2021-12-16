# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{ 


    float saldoM,cred,montante;

    printf("+-------------------------+\n");
    printf(" PROGRAMA CREDITO ESPECIAL\n");
    printf("+-------------------------+\n\n");

    printf("Digite o seu saldo medio: ");
    scanf("%f", &saldoM);

    if (saldoM > 0 && saldoM <= 2000) 
    {
    printf ("\n Nenhum credito.");
    }
    else if (saldoM > 2000 && saldoM <= 4000)
    {
    printf ("\n20%% do valor do saldo medio.");
    cred = saldoM * 0.20;
    }
    else if (saldoM > 4000 && saldoM <= 6000) 
    {
    printf ("\n30%% do valor do saldo medio.");
    cred = saldoM * 0.30;
    }
    else if (saldoM > 6000)
    {
    printf ("\n40%% do valor do saldo medio.");
    cred = saldoM * 0.40;
    }
    else
    {
    printf("\n ERROR");      
    }

    montante = saldoM + cred;

    printf("\n\n\n--------------------------");
    printf("\n    Credito: %.2f",cred);
    printf("\n    Montante:  %.2f",montante);
    printf("\n--------------------------");

    getch();
    return 0;

}
