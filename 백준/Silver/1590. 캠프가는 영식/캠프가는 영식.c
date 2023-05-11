#include<stdio.h>
int main(){
	int a,s;
	scanf("%d %d",&a,&s);
	int z=2147000000,x=0;
	for(int i=1;i<=a;i++){
		int q,w,e;
		scanf("%d %d %d",&q,&w,&e);
		for(int j=1;j<=e;j++,q+=w){
			if(q>=s){
				x=q-s;
				if(z>x){
					z=x;
					break;
				}
			} 
		}
	}
	if(z==2147000000){
		printf("-1");
	}else{
		printf("%d",z);
	}
}