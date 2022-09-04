// 5. Write a recursive function to calculate sum of digits of a given number

#include<stdio.h>
int sumOfDigits(int);

int main()
{
    int x,k;
    printf("Enter a number: ");
    scanf("%d",&x);


    k=sumOfDigits(x);
    printf("Sum of digits of %d is= %d",x,k);

    return 0;
}

int sumOfDigits(int n)
{
    int s=0,r;
    if(n<10)
        return n;
    r=n%10;
    s=r+sumOfDigits(n/10);
    return s;
}
