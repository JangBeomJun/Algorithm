#include<stdio.h>
int main(){
	int a,s,d;
	scanf("%d %d %d",&a,&s,&d);
	int f=1,g,fl=0,t=2147000000;
	for(int i=1;i<=a && i<=d;i++){
		scanf("%d",&g);
		if(g<s) break;
		f++;
		if(g==s && fl==0){
			t=f-1;
			fl++;
		}
	}
	if(f>d)  printf("-1");
	else if(fl!=0) printf("%d",t);
	else printf("%d",f);
}