/**
          Author:Asif Mohmmed Sifat
                (Self Learner)
        Prime number by ##SQUARE ROOT##
**/

#include<stdio.h>
#include<math.h>

int isPrime(int n){
    int i;
    if(n<2){
            return 0;
    }
    if(n==2) return 1;

    for(i=3;i<sqrt(n);i=i+2){

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

