#include<stdio.h>
#include<string.h>
int main(){
	int i=0,j=0,k=0,n;
	scanf("%d",&n);
	char f[n][10],fl[100][10];
	int no[n];
	for(i=0;i<n;i++){
		scanf("%s%d",f[i],&no[i]);
		k=k+no[i];
		for(j=j;j<k;j++){
			scanf("%s",fl[j]);
		}
	}
	j=0;
	for(i=0;i<k;i++){
		if(strcmp(f[j],fl[i])==0){
		j++;i=-1;}
		else printf("%s ",fl[i]);
	}
return 0;
}

