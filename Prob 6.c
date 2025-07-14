/*Print the following series and find the result of the series.
Input: 5
Output: 1 + 2*4*6 + 3*6*9 + 4*8*12 + 5*10*15 = 1345 */
#include <stdio.h>
int main() {
    int i,n,sum=0;
    printf("Enter the value of n: ");
    scanf(" %d",&n);
    for(i=1;i<=n;i++){
        if(i==1){
            printf("1");
            sum+=1;
        }else{
            int a=i;
            int b=2*i;
            int c=3*i;
            int d= a*b*c;
            printf(" + %d*%d*%d",a,b,c);
            sum+=d;
        }
    }
    printf(" = %d\n",sum);
    return 0;
}
