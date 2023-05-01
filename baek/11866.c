#include<stdio.h>
int main(){
	int a,s;
	int d[1001]={0,};
	int f[1000];
	scanf("%d %d",&a,&s);
	int q=0,t;
	for(int i=0;i<a;i++){
		t=0;
		for(int j=1;j<=t+s;j++){
			q++;
			if(q>a) q=1;
			if(d[q]!=0) t++;
		}
		d[q]=8;
		f[i]=q;
	}
	printf("<");
	for(int i=0;i<a-1;i++){
		printf("%d, ",f[i]);
	}
	printf("%d>",f[a-1]);
}
