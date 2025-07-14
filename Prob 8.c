/*Print the Fibonacci Series up to a certain number.
(The Fibonacci sequence is a sequence where the next term is the sum of the previous
two terms. The first two terms of the Fibonacci sequence are 0 and 1.)
Input: 8
Output: 0 1 1 2 3 5 8*/
#include <stdio.h>
int main() {
    int f=0,s=1,next,n,i;
    printf("Enter the value of n: ");
    scanf(" %d",&n);
    for(i=1;i<=n;i++){
        printf(" %d",f);
        next= f+s;
        f=s;
        s=next;
    }
    return 0;
}
