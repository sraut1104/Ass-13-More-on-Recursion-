// 4. Write a recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>
int sumSquareN(int);

int main()
{
    int x,k;
    printf("Enter a number: ");
    scanf("%d",&x);


    k=sumSquareN(x);
    printf("Sum of square of 1st %d natural numbers is= %d",x,k);
    return 0;
}

int sumSquareN(int n)
{
    int s=0;
    if(n==1)
        return 1;
    s=sumSquareN(n-1)+n*n;
    return s;
}
