/*Write a C program for printing the following pattern :
Input:5
Output:
A
BB
CCC
DDDD
EEEEE
DDDD
CCC
BB
A  */ 

#include <stdio.h>
int main() {
    int n,row,col;
    printf("Enter N=");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++)
        printf("%c",row+64);
    printf("\n");
    }
     for(row=n-1;row>=1;row--){
        for(col=1;col<=row;col++)
        printf("%c",row+64);
    printf("\n");
    }
    return 0;
}