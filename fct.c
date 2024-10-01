#include <stdio.h>
void cube(float N){
    float c ;
    c = N * N *N;
    return c;
}

int main()
{
    float N ;
    printf("Veuillez entrer la valeur de N :");
    scanf("%f",&N);
    printf("Le cube de %f est : %f \n",N,cube(N));
    return 0;
}
