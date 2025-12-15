#include<stdio.h>
int main(){
    int n,digit,sum=0,count=0;
    scanf("%d",&n);
    while(1){
        count+=1;
        digit=n%10;
        sum=sum+digit;
        n=n/10;
        if(sum>9 && n>1){
            n=sum;
        }
        if(sum<10 && n<1){
            break;
        }
        
        
    }
    printf("Digital Root: %d\n",sum);
    printf("Number of Steps: %d\n",count);
    
    return 0;
    
}