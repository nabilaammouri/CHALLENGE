#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsuis , kelvin ;
    printf("Veuillez entrez la temperature en c :");
    scantf("%f" , & celsuis);
    kelvin = celsuis + 273.15 ;
    printf("la temperature en kelvin est : %2f",kelvin);
    return 0;

}
int main()
{
    int J ,m , a ;
    printf("une date au format jj/mm/aaaa ");
    scantf("%d/%d/%d", &j ,&m ,&a);
    switch (m)
    {
        case 1 ;
        printf("%d-janvier-%d",j ,a);

    }


    {
        case 2 ;
        printf("%d-fevrier-%d" , j ,a);
    }


    return 0;