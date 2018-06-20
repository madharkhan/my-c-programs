#include<stdio.h>
int main(){
int a[8]={2,4,5,6,7,9,10,13};
int b[10]={2,3,4,5,6,7,8,9,11,15};
int c[18]={0};
int n1=0,n2=0,n3=0,i,j;
for(i=0;n1+n2!=18;i++){
    if(a[n1]>b[n2]||(n1==8&&n2<11)){
        c[n3]=b[n2];n2++;n3++;
    }
    else if(a[n1]<b[n2]||(n2==10&&n1<9)){
        c[n3]=a[n1];n1++;n3++;
    }
    else if(a[n1]==b[n2]){
        c[n3]=a[n1];n1++;n3++;n2++;
    }

}
for(j=0;j<n3;j++){
    printf("%d ",c[j]);
}


return 0;}
