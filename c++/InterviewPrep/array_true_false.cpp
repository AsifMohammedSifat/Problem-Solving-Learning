
#include<bits/stdc++.h>
using namespace std;
bool* inverse(string a[],int n,bool b[],string x)
{
    int indx=-1,i;
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            indx=i;
            break;
        }
    }
    if(indx==-1)
    {
        return NULL;
    }
    if(b[indx]==true) b[indx]=false;
    else b[indx]=true;
    return b;
}
int main()
{
    string a[]={"a","b","c","d"};
    bool b[]={true,true,false,false};
    bool *ans = inverse(a,4,b,"d");
    if(ans==NULL)
    {
        cout<<"NOT FOUND"<<endl;
        return 0;
    }
    for(int i=0;i<4;i++)
    {
        //cout<<ans[i]<<endl;
        if(ans[i]==1){
            cout<<"TRUE"<<endl;
        }
        else{
            cout<<"FALSE"<<endl;
        }
    }
    return 0;
}
