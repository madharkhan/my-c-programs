#include<stdio.h>
#include<string.h>

int main(){
    char s[20];
    int i,j,n,k=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]-0<97||s[i]-0>122){
            n=s[i]-'0';k=0;
            if(s[i+1]-0<97||s[i+1]-0>122){
                n=n*10+s[i+1]-'0';k=1;}
            for(j=0;j<n;j++)
            printf("%c",s[i-1]);
            i=i+k;
        }
    }

return 0;}
