#include "eu_gcd.h"
//Simple GCD implementation
int main(void){
    int a,b,d;
    printf("2 numbers please: ");
    scanf("%d %d", &a,&b);
    printf("The GCD of %d and %d is: ", a,b);
    d = eu_gcd(a,b);
    printf("%d \n",d);
    return 0;
}