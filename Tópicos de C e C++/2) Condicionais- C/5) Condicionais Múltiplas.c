#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    char letra;
    bool confirmation;

    //CONDICIONAIS M�LTIPLAS S�O V�RIOS CONDI��ES QUE DEVEM OCORRER DE FORMA SIMULTANEA, PARA DETERMINADA TAREFA SER EXECUTADA
    //CONSIDERE || PARA "OU" E && PARA "E"

    printf("\nDigite uma vogal: ");
    scanf(" %c", &letra);
    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){ //SE DIGITAR A OU E, OU I, OU O, OU U, FOI DIGITADO UMA VOGAL, E O COMANDO DESTE IF � PROCESSADO
        printf("\nVoc� digitou a vogal %c ? Digite 1 para sim e 0 para n�o: ", letra);
        scanf("%d", &confirmation);
        if(confirmation == true){
            printf("\nResposta processada...Foi confirmada a digita��o da vogal %c", letra);
        }
        else if(confirmation == false){
            printf("\nResposta processada...Voc� est� enganando o programa!!\n");
        }
    }
    else if(letra != 'a' || letra != 'e' || letra != 'i' || letra != 'o' || letra != "u"){ //SE DIGITAR UMA LETRA DIFERENTE(!=) DE A, OU E, OU I, OU O, OU U, O COMANDO � EXECUTADO
        printf("\nErro! Fora digitada uma consoante! As vogais s�o a, e, i, o, u.");
    }

    system("pause");
    return 0;

}
