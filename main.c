#include <stdio.h>
#include "conta.h"

int main() {
    Conta contas[MAX_CONTAS];
    int opcao, contaEscolhida;
    float valor;

    for (int i = 0; i < MAX_CONTAS; i++) {
        cadastrarConta(&contas[i], i + 1);
    }

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Ver saldo\n");
        printf("4 - Saldo total\n");
        printf("5 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Conta (1 a 3): ");
                scanf("%d", &contaEscolhida);
                printf("Valor: ");
                scanf("%f", &valor);
                depositar(&contas[contaEscolhida - 1], valor);
                break;

            case 2:
                printf("Conta (1 a 3): ");
                scanf("%d", &contaEscolhida);
                printf("Valor: ");
                scanf("%f", &valor);
                sacar(&contas[contaEscolhida - 1], valor);
                break;

            case 3:
                printf("Conta (1 a 3): ");
                scanf("%d", &contaEscolhida);
                verSaldo(contas[contaEscolhida - 1]);
                break;

            case 4:
                printf("Saldo total: %.2f\n", saldoTotal(contas));
                break;

            case 5:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 5);

    return 0;
}