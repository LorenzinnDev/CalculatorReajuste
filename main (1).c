#include <stdio.h>

int main() {
    float sal_A, temp_S, bonus, novo_S;
    
    printf("INFORME O SALARIO ATUAL: ");
    scanf("%f", &sal_A);
    printf("\nINFORME O TEMPO DE SERVICO: ");
    scanf("%f", &temp_S);
    
    if (sal_A <= 500) {
        novo_S = (sal_A * 0.25) + sal_A;
        printf("\nSEU SÁLARIO TERÁ UM REAJUSTE DE 25%%, TOTALIZANDO: %.2f", novo_S);
    }
    else if (sal_A <= 1000) {
        novo_S = (sal_A * 0.20) + sal_A;
        printf("\nSEU SÁLARIO TERÁ UM REAJUSTE DE 20%%, TOTALIZANDO: %.2f", novo_S);
    }
    else if (sal_A <= 1500) {
        novo_S = (sal_A * 0.15) + sal_A;
        printf("\nSEU SALÁRIO TERÁ UM REAJUSTE DE 15%%, TOTALIZANDO: %.2f", novo_S);
    }
    else if (sal_A <= 2000) {
        novo_S = (sal_A * 0.10) + sal_A;
        printf("\nSEU SALÁRIO TERÁ UM REAJUSTE DE 10%%, TOTALIZANDO: %.2f", novo_S);
    }
    else if (sal_A > 2000) {
        printf("\nSEU SALARIO NÃO TERÁ REAJUSTE.");
    }
    
    if (temp_S < 1) {
        printf("\nVocê não tem direito a bonus!");
    }
    else if ((temp_S >= 1) && (temp_S < 3)) {
        bonus=novo_S + 100 + sal_A;
        printf("\n(Você terá um bônus de 100 reais, totalizando: R$ %.2f)", bonus);
    }
    else if ((temp_S >= 4) && (temp_S < 6)) {
        bonus=novo_S + 200 + sal_A;
        printf("\n(Você terá um bônus de 200 reais, totalizando: R$ %.2f)", bonus);
    }
    else if ((temp_S >= 7) && (temp_S < 10)) {
        bonus=novo_S + 300 + sal_A;
        printf("\n(Você terá um bônus de 300 reais, totalizando: R$ %.2f)", bonus);
    }
    else if (temp_S > 10) {
        bonus=novo_S + 500 + sal_A;
        printf("\n(Você terá um bônus de 500 reais, totalizando: R$ %.2f)", bonus);
    }
    
    return 0;
}