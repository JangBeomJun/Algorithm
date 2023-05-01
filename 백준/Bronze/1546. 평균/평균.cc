#include<stdio.h>
int main(){
	int a,i,k;
	float f=0,l,t=0;
	scanf("%d",&a);
	float u[a];
	for(i=0;i<a;i++){
		scanf("%f",&u[i]);
		if(u[i]>t){
			t=u[i];
			k=i;
		}
	}
	for(i=0;i<a;i++){
		if(k!=i){
			l=u[i]/t*100;
			f+=l;
		}
		else f+=100;
	}
	printf("%0.2f",f/a);
	return 0;
}