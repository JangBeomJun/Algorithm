#include<stdio.h>
int main(){
	int q;
	scanf("%d",&q);
	for(int t=1;t<=q;t++){
	int a,s;
	scanf("%d %d",&a,&s);
	int d[100];
	int f[100]={0,};
	for(int i=0;i<a;i++){
		scanf("%d",&d[i]);
	}
	int r=0,w=-1;
	while(1){
		w=(w+1)%a;
		while(f[w]==1){
			w=(w+1)%a;
		}
		int e=0;
		for(int i=0;i<a;i++){
			if(d[w]<d[i]){
				e=1;
				break;
			}
		}
		if(e==0){
			if(w==s){
				printf("%d\n",r+1);
				break;
			}else{
				r++;
				f[w]=1;
				d[w]=-1;
			}
		} 	
	}
	}
}