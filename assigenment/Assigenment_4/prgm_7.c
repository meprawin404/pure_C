// 7. Write a program to print the first 10 even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int t;
    printf("Enter the tearm: ");
    scanf("%d",&t);
    for (int i = t; i >= 2; i--)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
        
    }
    return 0;
}