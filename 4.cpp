#include<stdio.h>
int main(){
	int n,i,j,t1,t2,n1,k=0;
	scanf("%d",&n);
	n1=n;
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	k=0;
	while(n--){
		t1=a[k][n-1];
		for(i=n-1;i>0;i--){
			a[k][i]=a[k][i-1];
		}
		t2=a[n-1][n-1];
		printf("%d %d \n",t1,t2);
		for(i=n-1;i>0;i--){
			a[i][n-1]=a[i-1][n-1];
		}
		a[k+1][n-1]=t1;
		t1=a[n-1][k];
		for(i=0;i<n-1;i++){
			a[n-1][i]=a[n-1][i+1];
		}
		a[n-1][i-1]=t2;
		for(i=0;i<n-1;i++){
			a[i][k]=a[i+1][k];
		}
		a[i-1][k]=t1;
		printf("%d %d \n",t1,t2);
		k++;
	}
	for(i=0;i<n1;i++){
		for(j=0;j<n1;j++){
			if(a[i][j]<9)
			printf("%d  ",a[i][j]);
			else
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
