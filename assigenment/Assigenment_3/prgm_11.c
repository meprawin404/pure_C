// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
// out of 100 and passing marks is 33. Now display whether the candidate passed the 
// examination or failed.

#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the marks of five subjects: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if ( a>=33&&a<=100 && b>=33&&b<=100 && c>=33&&c<=100 && d>=33&&d<=100 &&e>=33&&e<=100 )
    {
        printf("U pass the exam");
    }
    else
    printf("U faild the exam");
    
    return 0;
}