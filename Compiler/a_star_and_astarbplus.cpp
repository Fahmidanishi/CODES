#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int state=0;
    for(int i=0;i<n;i++)
    {
        if(state==0 && s[i]=='a')
            state=0;
        else if(state==0 && s[i]=='b')
            state=1;
        else if(state==1 && s[i]=='b')
            state=1;
        else if(state==1 && s[i]=='a')
            state=2;
        else
            state=2;
    }
    if(state==0)
        cout<<"Accepted in a* category";
    else if(state==1)
        cout<<"Accepted in a*b+ category";
    else
        cout<<"Not accepted";
}
