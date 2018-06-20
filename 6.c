#include<stdio.h>

int rev(char s[],int ind){
int i,j,k;
char p[20];j=0;
for(i=ind;s[i]!=' '&&s[i]!='\0';i++){
    p[j]=s[i];j++;
}
ind=i+1;
p[j]='\0';
if(s[i]==' '){
    rev(s,ind);
    printf("%s ",p);
}
if(s[i]=='\0'){
    printf("%s ",p);
    return 0;
}
}

int main(){
char s[50];
int i,j;
scanf("%[^\n]s",s);
j=rev(s,0);
return 0;}
