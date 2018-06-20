#include<stdio.h>
int main(){
	int i,j,k,n,p=0;
	scanf("%d",&n);
	int s[2*n],e[n];
	int t[24]={0};
	for(i=0;i<n;i++){
	scanf("%d%d",&s[i],&e[i]);
	//e[i]=1;
	if(e[i]<s[i])e[i]+=2400;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
				if((s[i]>s[j]&&e[j]>e[i]&&s[i]<e[j])||(s[i]<s[j]&&e[j]<e[i]&&s[i]<e[j])){
					p++;
					printf("---\n");
					printf("%d %d\n",s[i],e[i]);
					printf("%d %d\n",s[j],e[j]);
				}
		}
	//	if(p>max)
	}
	if(p==0)printf("1\n");
	else
	printf("%d",p);	
	return 0;
}
