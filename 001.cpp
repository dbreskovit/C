# include <stdio.h>
# include <stdlib.h>
# include <conio.h>

int main()
{ 

    int QP,QM,QG;
    float VP,VM,VG,T;
    printf("========================\n");
    printf("FABRICA DE ALCOOL EM GEL\n");
    printf("========================\n\n\n");

    printf("INFORME A QUANTIDADE DE EMBALAGENS PEQUENAS: ");
    scanf("%d", &QP);

    printf("INFORME A QUANTIDADE DE EMBALAGENS MEDIAS: ");
    scanf("%d", &QM);

    printf("INFORME A QUANTIDADE DE EMBALAGENS GRANDES: ");
    scanf("%d", &QG);

    VP = (QP * 8);
    VM = (QM * 13);
    VG = (QG * 16);
    T  = (VP+VM+VG);

    printf("\nVALOR DE EMBALAGENS PEQUENAS: %.f", VP);
    printf("\nVALOR DE EMBALAGENS MEDIAS: %.f", VM);
    printf("\nVALOR DE EMBALAGENS GRANDES: %.f", VG);
    printf("\nTOTAL ARRECADADO: %.f", T);


    getch();
    return 0;

}