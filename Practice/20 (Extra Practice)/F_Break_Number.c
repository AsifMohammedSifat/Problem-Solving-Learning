#include<stdio.h>

long long int count_div(long long int n){
    int count = 0;
    while(n!=0){
        if(n%2==0){
            n = n/2;
            count++;
        }else{
            break;
        }
    }
    return count;
}

int main(){
    int test;
    scanf("%d",&test);
    long long int count_max,max = 0;
    for(int i=0;i<test;i++){
        long long int n;
        scanf("%lld",&n);
        count_max = count_div(n); 
        if(count_max>max){
            max = count_max;
        }

        
    }     
    printf("%lld\n",max);   
              
    return 0;
}
