// 2. Write a recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>
int sumNOdd(int);

int main()
{
    int x,k;
    printf("Enter a number: ");
    scanf("%d",&x);


    k=sumNOdd(x);
    printf("Sum of 1st %d odd natural numbers is= %d",x,k);

    return 0;
}

int sumNOdd(int n)
{
    int s=0;
    if(n==1)
        return 1;
    s=sumNOdd(n-1)+2*n-1;
    return s;
}
