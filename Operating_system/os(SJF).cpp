#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p[100], bt[100], tat[100], wt[100];
    int temp;
    int s=0,sum=0;
    int n;
    cin>>n;

cout<<"enter process=";
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    cout<<"enter brust time=";
    for(int i=0;i<n;i++){
        cin>>bt[i];
    }

     for(int i=0;i<n-1;i++){
       for(int j=0;j<n-1-i;j++){
           if(bt[j]>bt[j+1]){
            temp=bt[j];
           bt[j]=bt[j+1];
           bt[j+1]=temp;

             temp=p[j];
           p[j]=p[j+1];
           p[j+1]=temp;

     } } }

       for(int i=0;i<n;i++){
       if(i==0)
       wt[i]=0;
       else
        wt[i]=bt[i-1]+wt[i-1];
       }
    for(int i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];

    }
    cout<<"process time \tbrust time \twt \ttat"<<endl;
    for(int i=0;i<n;i++){
    cout<<"P"<<p[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t"<<tat[i]<<endl;
    }
      for(int i=0;i<n;i++){
            s=wt[i]+s;
}
for(int i=0;i<n;i++){
            sum=tat[i]+sum;

}
cout<<"average of waiting time and turn around time="<<endl<<s/n<<endl<<sum/n;
}
