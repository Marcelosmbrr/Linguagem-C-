#include <stdio.h>
#include <stdlib.h>

int main (){

    //%d imprime a variável int (5) e \n quebra a linha
    int a = 5;
    printf ("%d\n", a);
    printf("O valor da variavel a e: %d\n", a);
    int b;
    printf("\nInsira um valor para b:");
    scanf("%d", &b); //Le uma variavel, comando para inserçao de valor
    printf("\nO valor da variavel b e: %d\n", b);
    system("pause");
    return 0;


}
