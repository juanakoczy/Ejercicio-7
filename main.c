//Escriba un programa que declare una variable entera y que compruebe si es par o impar utilizando
// el operador módulo (%).
#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un numero entero:\n");
    scanf("%d",&n);
    if (n%2==0) {
        printf("El numero es par.\n");
    }
    else printf("El numero es impar.\n");
    return 0;
}
