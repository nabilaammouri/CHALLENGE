#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float X , Y , P;
    printf("Donner les valeurs de X et Y :");
    scanf("%f %f",&X ,&Y);
    P=pow(X,Y);
    printf("La puissance est :%.2f",P);
    return 0;
}
