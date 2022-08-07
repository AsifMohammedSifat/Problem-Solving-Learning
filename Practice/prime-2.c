/**
        Prime number by ##N/2##
         Author:Asif Mohmmed Sifat
                (Self Learner)
**/
#include<stdio.h>

int isPrime(int n){
    int i;
    if(n<2){
            return 0;
    }
    if(n==2) return 1;

    for(i=3;i<n/2;i+=i+2){

        if(n%i==0){
            return 0;
        }
    }
    return 1;

}
int main(){
    int n;
    while(1==scanf("%d",&n)){
          if(1==isPrime(n)){
        printf("YES!!Prime Number.\n");
    }
    else{
        printf("NO!!Not Prime Number.\n");
    }
    }

}

