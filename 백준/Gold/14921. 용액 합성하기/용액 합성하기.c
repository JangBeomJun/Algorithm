#include<stdio.h>
#include <stdlib.h>
int z[1000000];
int main(){
	int a,s=0,d,f,t=2147000000;
	scanf("%d",&a);
	
	for(int i=0;i<a;i++){
		scanf("%d",&z[i]);
	}
	f=a-1;
	d=0;
	int q,w=0;
	while(1){
		if(f<=d) break;
		q=z[d]+z[f];
		w=0;
		if(q<0){
			w=1;
			q*=-1;
		}
		if(t>q){
			t=q;
			s=w;
		}
		if(w==1){
			d++;
		}
		else f--;
	}
	if(s==1){
		printf("-");
	}
	printf("%d",t);
}