#include <stdio.h>
#include <stdlib.h>

int calcolaMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int calcolaMCM(int a, int b) {
    int mcd = calcolaMCD(a, b);
    return abs(a * b) / mcd;
}

int main() {
    int num1, num2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &num2);

    int mcm = calcolaMCM(num1, num2);

    printf("Il minimo comune multiplo di %d e %d e': %d\n", num1, num2, mcm);

    return 0;
}
