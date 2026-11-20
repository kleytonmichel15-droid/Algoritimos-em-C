#include <stdio.h>

int main() {
    int valor, resto;
    int e200, e100, e50, e20, e10, e5;   // estoque do caixa
    int d200, d100, d50, d20, d10, d5;   // disponível para saque
    int n200, n100, n50, n20, n10, n5;   // notas entregues
    int total;

    printf("Estoque de notas de 200, 100, 50, 20, 10 e 5: ");
    scanf("%d %d %d %d %d %d", &e200, &e100, &e50, &e20, &e10, &e5);
   
    printf("Valor do saque: ");
    scanf("%d", &valor);

    //Valor válido: positivo e múltiplo de 5
    if (valor <= 0 || valor % 5 != 0) {
        printf("Valor invalido!\n");
    }

    // Regra adicional: preservar 1 nota de cada denominação disponível
    d200 = (e200 > 0) ? e200 - 1 : 0;
    d100 = (e100 > 0) ? e100 - 1 : 0;
    d50  = (e50  > 0) ? e50  - 1 : 0;
    d20  = (e20  > 0) ? e20  - 1 : 0;
    d10  = (e10  > 0) ? e10  - 1 : 0;
    d5   = (e5   > 0) ? e5   - 1 : 0;

    resto = valor;
    
    n200 = resto / 200; 
    
    if (n200 > d200){ 
        n200 = d200;
    }     
    resto -= n200 * 200;
    n100 = resto / 100; 
    
    if (n100 > d100) {
        n100 = d100;
    }
    resto -= n100 * 100;
    n50  = resto / 50;  
    
    if (n50  > d50){  
        n50  = d50;  
    }     
    resto -= n50 * 50;
    n20  = resto / 20;  
    
    if (n20  > d20){  
        n20  = d20;  
    }     
    resto -= n20 * 20;
    n10  = resto / 10;  
    
    if (n10  > d10) {
        n10  = d10;
    }
    resto -= n10 * 10;
    n5   = resto / 5;   
    
    if (n5   > d5) {
        n5   = d5;
    }
    resto -= n5 * 5;

    // É possível sacar?
    if (resto != 0) {
        printf("Saque impossivel (sem notas suficientes ou violaria a regra de preservar 1 nota de cada).\n");
        return 0;
    }

    total = n200 + n100 + n50 + n20 + n10 + n5;

    printf("Saque realizado!\n");
    if (n200 > 0){
        printf("Notas de R$ 200: %d\n", n200);
    } 
    
    if (n100 > 0){
        printf("Notas de R$ 100: %d\n", n100);
    } 
    
    if (n50  > 0){
        printf("Notas de R$ 50: %d\n", n50);
    } 
    
    if (n20  > 0){
        printf("Notas de R$ 20: %d\n", n20);
    } 
    
    if (n10  > 0){
        printf("Notas de R$ 10: %d\n", n10);
    } 
    
    if (n5   > 0){
        printf("Notas de R$ 5: %d\n", n5);
    } 
    printf("Total de cedulas: %d\n", total);

    return 0;
}