#include<stdio.h>
int main(){
	int a,s,r=0,t,k;
	scanf("%d %d",&a,&s);
	for(int i=a;i<=s;i++){
		if(i==1) continue;
		if(i==2){
			r+=i;
			k=i;
			continue;
		}
		t=0;
		for(int j=2;j<i;j++){
			if(i%j==0){
			t++;
			break;
		}
	}
	if(t==0 && r==0) k=i;
	if(t==0) r+=i;
	}
	if(r==0) printf("-1");
	else printf("%d\n%d",r,k);
}