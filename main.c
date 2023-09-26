#include<stdio.h>

//hay varios tipos de moneda, donde una tiene un valor determinado (0.95€ = 1$ = 17 pesos mexicanos)

void convert(int type, float money)
{
    switch(type)
    {
        float money, euros, dollars, pesos;
        
        case 0:
            
            break;

        case 1: 
            
            break;

        case 2: 

            break;

    }
}

void checkMoneyType(int type)
{   
    switch(type)
    {
        float money;
        
        case 0:
            printf("\nCuantos EUROS quieres convertir?\n\n");
            scanf("%f", &money);
            convert(type, money);
            fflush(stdin);
            break;

        case 1: 
            printf("\nCuantos DÓLARES quieres convertir?\n\n");
            scanf("%f", &money);
            convert(type, money);
            fflush(stdin);
            break;

        case 2: 
            printf("\nCuantos PESOS quieres convertir?\n\n");
            scanf("%f", &money);
            convert(type, money);
            fflush(stdin);
            break;

        default:
            printf("NOT valid arguments");
            return; 
    }
}

int main()
{
    int moneyType;

    printf("\n");
    printf("Coloca el TIPO DE MONEDA que quieres poner\n");
    printf("0 --> EUR\n1 --> USD\n2 --> Peso Mxn\n\n");

    scanf("%d", &moneyType);
    checkMoneyType(moneyType);
    fflush(stdin);

    return 0;
}