#include<bits/stdc++.h>
using namespace std;
void knapsack(int n,float weight[],float profit[],float capacity){
float x[20],tp=0;
int i;
for(i=0;i<n;i++)
    x[i]=0.0;
for(i=0;i<n;i++){
    if(weight[i]>capacity)
        break;
    else{
        x[i]=1.0;
        tp=tp+profit[i];
        capacity=capacity-weight[i];
    }
}
tp=tp+profit[i]*(capacity/weight[i]);
cout<<"Maximum profit is="<<tp<<endl;
}
int main(){
float weight[20],profit[20],capacity;
int n,i,j;
float ratio[20],temp;
cout<<"Enter the number of objects="<<endl;
cin>>n;
cout<<"enter the weight and profit of each object="<<endl;
for(i=0;i<n;i++){
    cin>>weight[i]>>profit[i];
}
cout<<"enter the capacity of knapsack="<<endl;
cin>>capacity;
for(i=0;i<n;i++){
    ratio[i]=profit[i]/weight[i];
}
for(i=0;i<n;i++){
    for(j=0;j<n-1-i;i++){
        if(ratio[j]<ratio[j+1]){
            temp=ratio[j];
            ratio[j]=ratio[j+1];
            ratio[j+1]=temp;

            temp=weight[j];
            weight[j]=weight[j+1];
            weight[j+1]=temp;

            temp=profit[j];
            profit[j]=profit[j+1];
            profit[j+1]=temp;
        }
    }
}
knapsack(n,weight,profit,capacity);
}
