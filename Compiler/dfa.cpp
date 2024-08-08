#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
char state = 'A';
for(int i=0; i<s.size(); i++){
    if(state == 'A' && s[i] == '0' && s[i+1] == '1') state = 'B';
    else if(state == 'B' && s[i] == '1') state = 'C';
}
if(state == 'C') cout<<"Accepted";
else cout<<"Not accepted";
}
