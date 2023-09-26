#include<stdio.h>

//hay varios tipos de moneda, donde una tiene un valor determinado (0.95€ = 1$ = 17 pesos mexicanos)

void convert(int type, float money)
{
    float euros, dollars, pesos;
    if(money < 0) return;

    switch (type)
    {
        case 0:
            dollars = money / 0.95;
            pesos = money * 18.5;
            printf("%f EUR\nCONVERSIONES:\nEuros a:\nDólares --> %f\nPesos Mexicanos --> %f\n", money, dollars, pesos);
            break;

        case 1:
            euros = money * 0.95;
            pesos = money * 17.5;
            printf("%f USD\nCONVERSIONES:\nDólares a:\nEuros --> %f\nPesos Mexicanos --> %f\n", money, euros, pesos);
            break;

        case 2:
            euros = money / 18.5;
            dollars = money / 17.5;
            printf("%f Pesos Mexicanos\nCONVERSIONES:\nPesos a:\nEuros --> %f\nDólares --> %f\n", money, euros, dollars);
            break;

        default:
            printf("No es un tipo de moneda válido.\n");
            break;
    }


}

void checkMoneyType(int type)
{   
    float money;
    
    switch(type)
    {
        
        case 0:
            printf("\nCuantos EUROS quieres convertir?\n\n");
            scanf("%f", &money);
            printf("\n\n");
            convert(type, money);
            
            break;

        case 1: 
            printf("\nCuantos DÓLARES quieres convertir?\n\n");
            scanf("%f", &money);
            printf("\n\n");
            convert(type, money);
            
            break;

        case 2: 
            printf("\nCuantos PESOS quieres convertir?\n\n");
            scanf("%f", &money);
            printf("\n\n");
            convert(type, money);
            
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