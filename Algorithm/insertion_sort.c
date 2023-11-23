
#include<stdio.h>
int main(){
int a[100],i,j,n,key;
printf("enter the number of elements=");
scanf("%d",&n);
printf("value of elements=");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=1;i<n;i++){
    key=a[i];
    j=i-1;
    while(key<a[j] && j>=0){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
}
printf("after sorting=");
for(i=0;i<n;i++)
    printf(" %d ",a[i]);
}
