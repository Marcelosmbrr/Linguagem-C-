#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, num3;

    printf("Digite o primeiro valor:");
    scanf("%d", &num1);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &num2);
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &num3);

    //VALIDAÇÃO DE IGUALIDADE OU EXTREMOS MÁXIMOS E MÍNIMOS

    if(num1 > num2 && num1 > num3){
        printf("\nO maior valor e o primeiro valor digitado: %d", num1);
    }
    else if(num1 < num2 && num1 < num3){
        printf("\nO menor valor e o primeiro valor digitado: %d", num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("\nO maior valor e o segundo valor digitado: %d", num2);
    }
    if(num2 < num1 && num2 < num3){
        printf("\nO menor valor e o segundo valor digitado: %d", num2);
    }
    else if(num3 > num1 && num3 > num2){
        printf("\nO maior valor e o terceiro valor digitado: %d", num3);
    }
    if(num3 < num1 && num3 < num2){
        printf("\nO menor valor e o terceiro valor digitado: %d", num3);
    }
    else if(num1 == num2 && num1 == num3){
        printf("O primeiro valor %d e igual ao segundo valor %d que, por sua vez, e igual ao terceiro valor %d\n", num1, num2, num3);
    }

    system("pause");
    return NULL;

}
