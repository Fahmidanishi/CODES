#include<bits/stdc++.h>
using namespace std;
int main(){
int at[10],bt[10],rt[10],ct,smallest,i;
int remain=0,n,time,sum_wait=0,sum_turnaround=0;
cout<<"Enter the no of process:";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"Enter arrival time for process p"<<i+1<<":";
    cin>>at[i];
    cout<<"Enter brust time for process p"<<i+1<<":";
    cin>>bt[i];
    rt[i]=bt[i];
}
cout<<"\n\nProcess\t|Turnaround Time| Waiting Time\n\n";
rt[99]=9999;
for(time=0;remain!=n;time++){
 smallest=99;
for(int i=0;i<n;i++){
    if(at[i]<=time && rt[i]<rt[smallest] && rt[i]>0){
        smallest=i;
    }
}
rt[smallest]--;
if(rt[smallest]==0){
    remain++;
    ct=time+1;
    cout<<"\nP"<<smallest+1<<"\t|\t"<<ct-at[smallest]<<"\t|\t"<<ct-bt[smallest]-at[smallest];
    sum_wait+=ct-bt[smallest]-at[smallest];
    sum_turnaround+=ct-at[smallest];

}
}
}
