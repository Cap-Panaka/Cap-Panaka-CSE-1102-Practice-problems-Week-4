/*Write a C program for printing the following pattern :
Input:5
Output:
1
12
123
1234
12345 */
#include<stdio.h>
int main() {
    int col,row,n;
    printf("Enter N=");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d",col);
        }printf("\n");
    }
    return 0;
}