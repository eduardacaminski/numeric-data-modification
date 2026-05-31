#include <stdio.h>

int main() {
    int op, num, dig1, dig2, dig3, dig4, erro;

    printf("escolha uma opcao: ");
    scanf("%i", &op);

    switch(op) {
        case 1:
            do {
                erro = 1;
                printf("escreva o numero de 4 digitos: ");
                scanf("%i", &num);

                // Isolando os dígitos (Lógica original do manuscrito)
                dig1 = ((num % 1000) % 100) % 10;
                dig2 = ((num % 1000) % 100) / 10;
                dig3 = (num % 1000) / 100;
                dig4 = num / 1000;

                // Validação se os dígitos são maiores que 9
                if (dig1 > 9) {
                    erro = 0;
                } else {
                    if (dig2 > 9) {
                        erro = 0;
                    } else {
                        if (dig3 > 9) {
                            erro = 0;
                        } else {
                            if (dig4 > 9) {
                                erro = 0;
                            }
                        }
                    }
                }
            } while (erro == 0);

            printf("os numeros sao %i %i %i %i", dig4, dig3, dig2, dig1);
            break;

        case 2:
            printf("digite 4 numeros: ");
            scanf("%i %i %i %i", &dig1, &dig2, &dig3, &dig4);

            if (dig1 > 9) {
                printf("numero fora do intervalo");
            } else {
                if (dig2 > 9) {
                    printf("numero fora do intervalo");
                } else {
                    if (dig3 > 9) {
                        printf("numero fora do intervalo");
                    } else {
                        if (dig4 > 9) {
                            printf("numero fora do intervalo");
                        } else {
                            // Reconstruindo o número
                            num = dig1 * 1000;
                            num = num + (dig2 * 100);
                            num = num + (dig3 * 10);
                            num = num + dig4;

                            printf("o numero e %i", num);
                        }
                    }
                }
            }
            break;
    }

    return 0;
}
