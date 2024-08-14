#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
cin>>s;

int n = s.size();

int count = 0;

for(int i=0; i<n; i++){
    if(s[i] != 'a')
        count++;
}
if(count == 0){
    cout<<"Accepted";
}
else
{
    cout<<"Not accepted";
}
}
