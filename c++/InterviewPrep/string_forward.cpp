#include <bits/stdc++.h>
using namespace std;

string  manipulateString(string name)
{
	for (int i = 0; i < name.size(); i++) {
         int ascValue = name[i];
         if(ascValue==32){
            continue;
         }
         else{
		   name[i] = (char)(ascValue + 2);
         }
	}
	return name;
}

int main()
{
	string name = "asif mohammed sifat";
	string result=manipulateString(name);
	cout <<result;
	return 0;
}
