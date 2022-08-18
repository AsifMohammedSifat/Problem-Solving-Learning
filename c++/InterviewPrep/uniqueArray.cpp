#include<bits/stdc++.h>
using namespace std;
int k=0,outArr[1000];
int *getUnique(int arr[],int arrSize ){
    int countArr[5];
    memset(countArr,-1,sizeof(countArr));
    //check and filter
    for(int i=0;i<arrSize;i++){
        if(countArr[arr[i]]==-1){
            outArr[k]=arr[i];
            k++;
            countArr[arr[i]]=1;
        }
    }
    return outArr;
}

int main(){
    int input[]={1,2,1,4,2,3,1};
    int *result=getUnique(input,7);
    for(int i=0;i<k;i++){
        cout<<result[i]<<endl;
    }
    return 0;
}
