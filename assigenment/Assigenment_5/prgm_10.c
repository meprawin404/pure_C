// 10. Write a program to print a table of N
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%dX%d=%d\n",num,i,num*i);
    }
    return 0;
}