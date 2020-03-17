#include<stdio.h>
int main()
{
    int i,n,fact;
    fact=1;

    printf("Bir sayi giriniz:");
    scanf("%d",&n);

    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else{
        for(i=1; i<=n; i++){

        fact *=i;

    }
        printf("%d sayisinin faktoryeli=%d\n",n,fact);
    }
    return 0;
}
