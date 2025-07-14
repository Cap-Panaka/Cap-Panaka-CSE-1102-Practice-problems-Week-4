
//Write a C program to print all natural numbers in reverse (from n to 1). - using a while loop.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf(" %d",&num);
    while(num >=1){
        printf(" %d", num);
        num--;

    }
    return 0;
}
