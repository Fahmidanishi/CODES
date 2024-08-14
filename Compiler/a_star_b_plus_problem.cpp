#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int state = 0;

    for(int i = 0 ; i < s.size() ; i++)
    {
        if(state == 0 && s[i] == 'a') state = 0;
        else if(state == 0 && s[i] == 'b') state = 1;
        else if(state == 1 && s[i] == 'b') state = 1;
        else if(state == 1 && s[i] == 'b') state = 2;
        else if(s[i] != 'a' || s[i] != 'b') state = 2;
    }

    if(state == 1)
        cout<<"Accepted";
    else
        cout<<"Not Accepted";
}
