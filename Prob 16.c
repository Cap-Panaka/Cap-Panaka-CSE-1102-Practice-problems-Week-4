/*Write a C program for printing the following pattern :
Input:5
Output:  
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5 )
      */  
#include <stdio.h>
int main()
{
    int i, n, j, k,l;
    int num1, num2;
    printf("Enter N=");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        num1=i;
        for(j=1;j<=i;j++)
        {

            printf("%d", num1);
            num1++;
        }
        num2=2*i-2;
        for(l=1;l<=i-1;l++)
        {
            printf("%d", num2);
            num2--;
        }


        printf("\n");
    }

    return 0;
}
