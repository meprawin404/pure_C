// 5. Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int t;
    printf("Enter the term: ");
    scanf("%d",&t);
    for (int i = t; i >=1 ; i--)
    {
        if (i%2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}