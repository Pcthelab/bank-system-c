#include <stdio.h>
#include "conta.h"

void cadastrarConta(Conta *c, int numero) {
    c->numero = numero;
    c->saldo = 0;
}

void depositar(Conta *c, float valor) {
    if (valor > 0) {
        c->saldo += valor;
        printf("Deposito realizado!\n");
    } else {
        printf("Valor invalido!\n");
    }
}

void sacar(Conta *c, float valor) {
    if (valor > 0 && valor <= c->saldo) {
        c->saldo -= valor;
        printf("Saque realizado!\n");
    } else {
        printf("Saldo insuficiente ou valor invalido!\n");
    }
}

void verSaldo(Conta c) {
    printf("Conta %d - Saldo: %.2f\n", c.numero, c.saldo);
}

float saldoTotal(Conta contas[]) {
    float total = 0;
    for (int i = 0; i < MAX_CONTAS; i++) {
        total += contas[i].saldo;
    }
    return total;
}