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
