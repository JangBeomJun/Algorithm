#include<stdio.h>
int main(){
	int a=0,q=0,d=0,f=0,w=0,r=0,y=0,c=0;
	int s[101];
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&s[i]);
		q+=s[i];
	}
	while(1){
		q-=d;
		if(q==0) break;
		f=0;
		for(int i=a-1;i>=0;i--){
			if(s[i]>f){
				f=s[i];
				r=i;
			} 
		}
		w=0;y=-1;
		for(int i=a-1;i>=0;i--){
			if(s[i]>w && i!=r){
				w=s[i];
				y=i;
			} 
		}
		if(y==-1){
			 s[r]-=1;
			 d=1;
		}
		else{
			s[r]--;
			s[y]--;
			d=2;
		}
		c++;
	}
	if(c<=1440)printf("%d",c);
	else printf("-1");
}