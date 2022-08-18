#include<bits/stdc++.h>
using namespace std;

int getIndex(string name,string subName){
       int i,m,n;
    for(i=0;i<name.size();i++){
        if(name[i]==subName[0]){
                int countIndex=1;
                for(m=i+1,n=1;m<name.size(),n<subName.size();m++,n++){
                        if(name[m]==subName[n]){
                            countIndex++;
                        }
                        else{
                            break;
                        }
                }
                 if(countIndex==subName.size()){
                            return i;
                        }
        }

    }

    return -1;

}


int main(){
    int stringIndex=getIndex("iasif mohammed sifat","i");
    cout<<stringIndex;
    return 0;
}

