#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char letra;
    bool confirmation;

    //CONDICIONAIS MÚLTIPLAS SÃO VÁRIOS CONDIÇÕES QUE DEVEM OCORRER DE FORMA SIMULTANEA, PARA DETERMINADA TAREFA SER EXECUTADA
    //CONSIDERE || PARA "OU" E && PARA "E"

    printf("\nDigite uma vogal: ");
    scanf(" %c", &letra);
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){ //SE DIGITAR A OU E, OU I, OU O, OU U, FOI DIGITADO UMA VOGAL, E O COMANDO DESTE IF É PROCESSADO
        printf("\nVocê digitou a vogal %c ? Digite 1 para sim e 0 para não: ", letra);
        scanf("%d", &confirmation);
        if(confirmation == true){
            printf("\nResposta processada...Foi confirmada a digitação da vogal %c", letra);
        }
        else if(confirmation == false){
            printf("\nResposta processada...Você está enganando o programa!!\n");
        }
    }
    else if(letra != 'a' || letra != 'e' || letra != 'i' || letra != 'o' || letra != "u"){ //SE DIGITAR UMA LETRA DIFERENTE(!=) DE A, OU E, OU I, OU O, OU U, O COMANDO É EXECUTADO
        printf("\nErro! Fora digitada uma consoante! As vogais são a, e, i, o, u.");
    }

    system("pause");
    return 0;

}
