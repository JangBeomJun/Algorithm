#include<stdio.h>
int main(){
	int a,j,q,w,e=0;
	scanf("%d",&a);
	int s[101]={0,},d[101]={0,};
	for(int i=0;i<a;i++){
		scanf("%d",&j);
		s[j]++;
	}
	for(int i=0;i<a;i++){
		scanf("%d",&j);
		d[j]++;
	}
	for(int i=0;i<a;i++){
		for(j=0;j<=100;j++){
			if(s[j]>0){
				s[j]--;
				q=j;
				break;
			}
		}
		for(j=100;j>=0;j--){
			if(d[j]>=1){
				d[j]--;
				w=j;
				break;
			}	
		}
		e+=q*w;
	}
	printf("%d",e);
	return 0;
}