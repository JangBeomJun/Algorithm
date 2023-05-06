#include<stdio.h>
int main(){
	int a[8],t=0,y=0;
	for(int i=0;i<8;i++){
		scanf("%d",&a[i]);
		if(i!=0 && a[i]!=a[i-1]+1) t++;
		if(i!=0 && a[i]!=a[i-1]-1) y++;
	}
	if(t==0) printf("ascending");
	else if(y==0) printf("descending");
	else printf("mixed");
}