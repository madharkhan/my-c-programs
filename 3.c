#include<stdio.h>
#include<string.h>
int main(){
char s[50];
int i,j,l;
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++){
    for(j=0;j<l;j++){
            if(i==j)
            printf("%c",s[i]);
            if(j==l-i-1&&i!=j)
                printf("%c",s[l-i-1]);
            else
                printf(" ");

    }
    printf("\n");
}

}
