#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		int s,d,f;
		scanf("%d %d %d",&s,&d,&f);
		d=f/s;
		f%=s;
		if(f%s==0 && d<=9) printf("%d0%d\n",s,d);
		else if(f%s==0 && d>9) printf("%d%d\n",s,d);
		else if(d<9) printf("%d0%d\n",f,d+1);
		else printf("%d%d\n",f,d+1);
	}
}