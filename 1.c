//1. Write a recursive function to calculate sum of first N natural numbers

#include<conio.h>
#include<stdio.h>
int sumN(int);

int main()
{
    int x,k;
    printf("Enter a number: ");
    scanf("%d",&x);


    k=sumN(x);
    printf("Sum of 1st %d natural numbers is= %d",x,k);

    return 0;
}

int sumN(int n)
{
    int s=0;
    if(n==1)
        return s=s+n;
    s=n+sumN(n-1);
    return s;
}
