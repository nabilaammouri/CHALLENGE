#include <stdio.h>
void T Multiplicatin (int a){
    int i ;
    printf("La table de multiplication de %d est : \n",a);
    for(i=0 ;i<=10;i++){
        printf("%d x %d = %d \n",a,i,a*i);
    }
}

int main()
{
    int N ;
    printf("Veuillez entrer la valeur de N : ");
    scanf("%d",&N);
    T Multiplicatin(N);
    return 0;
}
