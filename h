#include<stdio.h>
int main(){
    int target,i,j,n,a,b;
    int num[50];
    printf(" number of number in array = ");
    scanf("%d",&n);
    printf("enter list of array \n ");
    for (i=0;i<n;i++){
        scanf("%d",&num[i]);
    }

    printf(" enter the number whose sum is to be found : ");
    scanf("%d",&target);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(num[i]+num[j]==target){
                a=i;
                b=j;
                break;
            }
        }
    }
    printf("[ %d,%d ]", a,b);
}
