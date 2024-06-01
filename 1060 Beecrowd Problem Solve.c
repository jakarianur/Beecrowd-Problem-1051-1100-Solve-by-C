#include<stdio.h>
int main()
{
    float x;
    int i,sum=0;
    for(i=1;i<=6;i++){
        scanf("%f",&x);
        if(x>0){
        sum=sum+1;
        } }
    printf("%d valores positivos\n",sum);
    return 0;
    }
