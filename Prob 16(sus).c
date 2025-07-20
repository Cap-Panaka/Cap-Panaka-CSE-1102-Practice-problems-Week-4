/*Write a C program for printing the following pattern :
Input:5
Output:  
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5 )
      */   //Not finished

  /*  1
   121
  12321
 1234321
123454321

 */
#include <stdio.h>
int main() {
    int n,row,col;
    printf("Enter N=");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++)
        printf(" ");
        for(col=1;col<=row;col++)
        printf("%d",col);
        for(col=row-1;col>=1;col--)
        printf("%d",col);
    printf("\n");
    }
    return 0;
}