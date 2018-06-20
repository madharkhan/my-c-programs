#include<stdio.h>
#include<string.h>
int main(){
char s[30];
char t[30];
int i,j,n,c=0,l;
scanf("%s",s);
scanf("%s",t);
l=strlen(t);
n=0;
for(i=0;s[i]!='\0'&&c!=l;i++){
if(t[n]==s[i]){
    for(j=i;t[j]!='\0';j++){
        if(t[n]==s[j]){c++;n++;}
        else{c=0;n=0;break;
        }
    }
}
if(c==l)printf("%d",i);
}
return 0;}
