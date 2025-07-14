/*Print the following series and find the result of the series.
Input: 5
Output: 1+8+27+64+125 = 225*/

#include <stdio.h>
int main() {
    int n,i,sum=0;
    printf("Enter the value of n: ");
    scanf(" %d",&n);
    for(i=1;i<=n;i++){
    int cube= i*i*i;
    printf(" %d",cube);
    sum+=cube;
    if (i<n){
        printf(" + ");
    }
    }
    printf(" = %d\n",sum);
    return 0;

}
