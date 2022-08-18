#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;

#define x 1000

class stack{

    int *arr;
    int top;

public:
    stack(){
        arr = new int[x];
        top=-1;
    }

    void push(int n){
        if(top==n-1){
            cout<<"overflow";
            return;
        }
        else{
            top++;
            arr[top]=n;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"underflow"<<endl;
            return;
        }
        else{
            top--;

        }
    }
    int Top(){
        if(top==-1){
            cout<<"underflow"<<endl;
            return -1;
        }
        return arr[top];

    }

    bool empty(){
        return top = -1;
    }
};


int main(){
    stack st;
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(17);
    st.push(25);
cout<<st.Top()<<endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();

    cout<<st.empty()<<endl;
}
