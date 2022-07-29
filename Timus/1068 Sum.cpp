/**
    Author: Asif Mohammed Sifat
    BGC Trust University Bangladesh

    ALGORITHM:
            Summation of
      0 TO n = (n*(n+1))/2;
      0 to -1=(n*(1-n)/2)+1;
**/

#include<iostream>
using namespace std;

int main(){
    int n,result=0;
    cin>>n;
    result=(n>0)?(n*(n+1))/2:(n*(1-n)/2)+1;
    cout<<result<<"\n";
    return 0;


}
