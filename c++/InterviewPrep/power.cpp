//power

#include<bits/stdc++.h>
using namespace std;

int getPower(int base,int power){

    float result = 1;

    while (power != 0) {
        result *= base;
        --power;
    }
    return result;
}

int main(){
    int result=getPower(5,5);
    cout<<result;

}
