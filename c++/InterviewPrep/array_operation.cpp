//array sum
#include<bits/stdc++.h>
using namespace std;

int getOperation(int arr[],int arrSize){
    int i,sum,k;
    for(i=0;i<arrSize;i++){
      sum=arr[i]*2;
    }
    return sum;
}


int main(){
    int arr[]={1,2};
    int result=getOperation(arr,2);
    cout<<result;

}
