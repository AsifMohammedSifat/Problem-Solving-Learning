//program to find unique string from repeated string
#include<bits/stdc++.h>
using namespace std;

string outArr[1000];
int k=0;
//implement function
string *getUniqueString(string arr[],int arrSize){
    map<string,int>countArr;

    //check element on array and set diffrent value
    for(int i=0;i<arrSize;i++){
        if(countArr[arr[i]]==0){
            outArr[k]=arr[i];
            k++;
            countArr[arr[i]]=1;
        }
    }
    return outArr;
}


//initialize main function
int main(){
    string arr[]={"rahim","asif","rahim","ushin","rahim"};
    string *result=getUniqueString(arr,5);
    sort(result,result+3);
    for(int i=0;i<k;i++){
        cout<<result[i]<<endl;
    }
    return 0;

}
