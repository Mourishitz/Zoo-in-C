#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, sum=0;

    printf("Digite um Numero: ");
    scanf("%d",&num1);

    printf("Digite outro Numero: ");
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("O resultado foi: %d", sum);

    system("PAUSE");
    return 0;
}
