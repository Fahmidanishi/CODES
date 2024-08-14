#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
string id = "";

for(int i=0; i<s.size(); i++){
    if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
    id += s[i];
    if(i == s.size() -1)
    cout<<id<<" is an identifier\n";
}
 else {
    cout<<id<<" is an identifier\n";
    cout<<s[i]<<" is an operator\n";
    id = "";
}
}
}
