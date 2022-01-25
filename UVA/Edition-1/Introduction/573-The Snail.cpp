/*
||-----------------------------------||
||      Asif Mohammed Sifat          ||
||      BGC Trust University         ||
||       Department of CSE           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    float height,up,down,fatigue,cur_position;

    while(cin>>height>>up>>down>>fatigue && height){
        fatigue=(fatigue*up)/100.0;
           int day=1;
           cur_position=0;
        while(true){
            cur_position=cur_position+up;
            if(cur_position>height){
                cout<<"success on day "<<day<<"\n";
                break;
            }
            if(up>0){
                up=up-fatigue;
            }

            cur_position=cur_position-down;
            if(cur_position<0.0){
                cout<<"failure on day "<<day<<"\n";
                break;
            }
            day++;
        }
    }

return 0;
}
