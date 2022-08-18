#include<bits/stdc++.h>
using namespace std;
int getIndex(string a,string b)
{
    int i,m,n;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==b[0])
        {
            int cnt=1;
            for(m=i+1,n=1;m<a.size(),n<b.size();m++,n++)
            {
                if(a[m]==b[n])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
            if(cnt==b.size())
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    int ans=getIndex("iasif mohammed sifat","i");
    cout<<ans<<endl;
    return 0;
}

