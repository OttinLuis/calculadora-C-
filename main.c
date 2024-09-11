#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
  setlocale(LC_ALL, "Portuguese");

  int op;
  float n1, n2, res;

    printf("aperte 1 se quiser somar: \n");
    printf("aperte 2 se quiser multiplicar: \n");
    printf("aperte 3 se quiser subtrair: \n");
    printf("aperte 4 se quiser dividir: \n");
    scanf("%d", &op);

    printf("escolha o primeiro numero:\n");
    scanf("%f", &n1);
    printf("escolha o segundo numero:\n");
    scanf("%f", &n2);

switch(op){
    case 1:
    res = n1 + n2;
        printf("a soma e: %f.\n", res);
        break;
    case 2:
    res = n1 * n2;
        printf("a multiplicao e: %f.\n", res);
        break;
    case 3:
    res = n1 - n2;
        printf("a subtracao e: %f.\n", res);
        break;
    case 4:
        if(n2 == 0){
            printf("divisao por zero");
        }
            else{
             res = n1 / n2;
                printf("a divisao e: %f.\n", res);
            }
}           break;

    return 0;
}

