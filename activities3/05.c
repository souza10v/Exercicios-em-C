#include <stdlib.h>
#include <math.h>
#include <string.h> 

int main() {
        
    char letra;
    printf("Insira a letra (em caixa alta):  ");
    scanf("%s", &letra);
    
    if (letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U'){
        printf("Vogal.");
    }

    else{
        printf("Consoamente.");
    }
}