
#include<stdio.h>
int main(){
int a[100],i,j,n,temp,small ;
printf("enter the number of elements=");
scanf("%d",&n);
printf("value of elements=");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n-1;i++){
        small=i;
    for(j=i+1;j<n;j++){
        if(a[small]>a[j]){
           small=j;
        }
temp=a[i];
a[i]=a[small];
a[small]=temp;
    }
}
printf("after sorting=");
for(i=0;i<n;i++)
    printf(" %d ",a[i]);
}
