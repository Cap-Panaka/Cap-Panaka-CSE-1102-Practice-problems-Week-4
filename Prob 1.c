// Write a C program to print all odd numbers between 1 to n.
#include <stdio.h>
int main() {
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d ",i);

        }
    }
    return 0;
}
