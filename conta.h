#ifndef CONTA_H
#define CONTA_H

#define MAX_CONTAS 3

typedef struct {
    int numero;
    float saldo;
} Conta;

void cadastrarConta(Conta *c, int numero);
void depositar(Conta *c, float valor);
void sacar(Conta *c, float valor);
void verSaldo(Conta c);
float saldoTotal(Conta contas[]);

#endif