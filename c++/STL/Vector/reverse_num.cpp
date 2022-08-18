#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> input(){
    vector<int> data;
    int n,d;
    cin>>n;
    while(n--){
        cin>>d;
        data.push_back(d);
    }
    return data;
}



vector<int> reverse_num(vector<int> data){
    vector<int> rdata;
    int len = data.size();
    for(int i=len-1;i>=0;i--){
            rdata.push_back(data[i]);
    }
    return rdata;

}

void output(vector<int> rdata){
    for(int data:rdata){
        cout<<data<<" ";
    }

}

int main(){
    vector<int> data;
    data=input();
    data=reverse_num(data);
    output(data);
}
