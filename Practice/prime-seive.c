#include<stdio.h>
#include<math.h>


void seive(int n){
    int i,j;
    int arr[100]={0};
   /** for(i=0;i<n;i++){
        arr[i]=0;
    }**/

    for(j=2;j<=n;j++){
        if(arr[j]==0){
            for(i=j*j;i<=n;i+=j){
                arr[i]=1;
            }
        }
    }
    for(i=2;i<n;i++){
        if(arr[i]==0){
            printf("%d ",i);
        }
    }

}

int main(){
    int n;
    scanf("%d",&n);
    seive(n);
    return 0;
}
