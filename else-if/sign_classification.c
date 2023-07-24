#include <stdio.h>

void main (){
    int integer;

    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &integer);

    if (integer > 0)
    {
        printf("Bilangan %d adalah POSITIF!!!", integer);

    }else{
        printf("Bilangan %d adalah NEGATIF!!!", integer);
    }
    
    
}
