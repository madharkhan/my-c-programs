#include<stdio.h>
int main(){
	int a[7]={13,2,4,15,12,10,5};
//int a[9]={1,2,3,4,5,6,7,8,9};
int n=9,i,j,t;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(j%2==0&&j+2<n){
           if(a[j]<a[j+2]){
            t=a[j+2];
            a[j+2]=a[j];
            a[j]=t;
           }
        }
        else if(j+2<n){
            if(a[j]>a[j+2]){
            t=a[j+2];
            a[j+2]=a[j];
            a[j]=t;
           }
        }
    }
}
for(i=0;i<n;i++)
    printf("%d ",a[i]);
return 0;}
