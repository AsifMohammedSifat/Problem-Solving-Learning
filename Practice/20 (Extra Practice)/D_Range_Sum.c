#include<stdio.h>
int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        long long int x,y;
        long long int sum = 0;
        scanf("%lld %lld",&x,&y);
        if(x>y) sum = (x*(x+1))/2 - ((y*(y-1))/2);
        else sum = (y*(y+1)/2) - (x*(x-1))/2;
        printf("%llu\n",sum);
    }        
              
    return 0;
}
