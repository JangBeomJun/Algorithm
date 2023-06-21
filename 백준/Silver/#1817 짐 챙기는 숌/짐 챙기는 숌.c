#include<stdio.h>
int main(){
	int a,s,d=0,f=0;
	scanf("%d %d",&a,&s);
	int weight;
	for(int i=0;i<a;i++){
		scanf("%d",&weight);
		if(f+weight>s){
			d++;
			f=weight;
		}else{
			f+=weight;
		}
	}
	if(f!=0) d++;
	printf("%d",d);
}