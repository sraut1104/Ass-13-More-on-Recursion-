// 3. Write a recursive function to calculate sum of first N even natural numbers

#include<stdio.h>
int sumNEven(int);

int main()
{
    int x,k;
    printf("Enter a number: ");
    scanf("%d",&x);


    k=sumNEven(x);
    printf("Sum of 1st %d even natural numbers is= %d",x,k);

    return 0;
}

int sumNEven(int n)
{
    int s=0;
    if(n==1)
        return s=s+2*n;
    s=sumNEven(n-1)+2*n;
    return s;
}


