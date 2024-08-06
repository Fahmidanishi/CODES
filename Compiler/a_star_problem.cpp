#include<bits/stdc++.h>
using namespace std;
int main(){
char String[100];
gets(String);
int length = strlen(String);
int count =0;
for(int i=0; i<length; i++){
    if(String[i] != 'a')
        count++;
}
if(count == 0)
    cout<<"accepted";
else
    cout<<"not accepted";
}
