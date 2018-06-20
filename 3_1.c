//To print n-th term of number system 3,4,33,34,43,44,333,334,.....
#include<stdio.h>
int main(){
int i,j,n,cnt,rem;
scanf("%d",&n);
for(i=1;n>0;i++){
    j=i;
    cnt=0;
    while(j!=0){
        rem=j%10;
        j=j/10;
        cnt++;
        if(rem==3||rem==4)
            cnt--;

    }
    if(cnt==0){
        n--;
    }
}
printf("%d ",--i);
return 0;
}
