#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade >= 18)
    {
        printf("Você é maior de idade");
    }
    else
    {
        printf("Você é menor de idade");
    }
    return 0;
}
