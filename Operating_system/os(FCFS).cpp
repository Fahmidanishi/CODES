#include<bits/stdc++.h>
using namespace std;
int main(){
int bt[100],wt[100],tat[100];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>bt[i]>>wt[i];
}
for(int i=0;i<n;i++){
 tat[i]=bt[i]+wt[i];
}
int s=0;
for(int i=0;i<n;i++){
 s=s+tat[i];
}
cout<<"average"<<s/n<<endl;
cout<<"Process\tBrust Time\tWaiting Time\tTurn Around Time"<<endl;
for(int i=0;i<n;i++){
 cout<<"p"<<i+1<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
}
cout<<endl;

}
