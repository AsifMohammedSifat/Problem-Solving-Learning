//array sort
#include<bits/stdc++.h>
using namespace std;

int *getSort(int arr[],int arrSize){
    int temp,i,j,mini;
    for(i=0;i<arrSize-1;i++){
       mini=i;
       for(j=i+1;j<arrSize;j++){
            if(arr[j]<arr[mini])
            {
                 mini=j;
            }
       }

   temp=arr[i];
   arr[i]=arr[mini];
   arr[mini]=temp;

   }



    return arr;
}

int main(){
    int number[]={1,72,75,41,50,67,75,80,99,10};
    int arrSize=sizeof(number)/sizeof(number[0]);
    int *sortedNumber=getSort(number,arrSize);
    for(int i=0;i<arrSize;i++){
        cout<<sortedNumber[i]<<" ";
    }
    return 0;


}
