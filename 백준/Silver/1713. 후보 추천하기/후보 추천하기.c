#include<stdio.h>
int main(){
	int a,s,d,top=0,fl1=0,fl2=0;
	int r,q,w,e;
	int f[20];
	int g[1000];
	int h[1000]={0,};
	scanf("%d\n%d",&a,&s);
	for(int i=1;i<=s;i++){
		scanf("%d",&d);
		if(top==a){
			fl1=0;
			r=1000;
			for(int j=0;j<a;j++){
				if(f[j]==d){
					 h[d]++;
					 fl1++;
					 break;
				}
				if(r>=h[f[j]]){
					if(r==h[f[j]]){
						if(g[q]>g[f[j]]){
							r=h[f[j]];
							q=f[j];
							w=j;
						}
					}
					else{
						r=h[f[j]]; //득표수 
						q=f[j]; //번호 
						w=j; //위치 
					}
				}
			}
			if(fl1==0) {
				g[q]=0;
				h[q]=0;
				f[w]=d;
				g[d]=i;
				h[d]++;
			}
		}
		else{
			fl1=0;
			for(int j=0;j<a;j++){
				if(f[j]==d){
					fl1=1;
					h[d]++;
					break;
				}
			}
			if(fl1==0){
				f[top++]=d;
				g[d]=i;
				h[d]++;
			}
		}
	}
	for(int i=0;i<a && i<top;i++){
		q=1000;
		for(int j=0;j<a;j++){
			if(q>f[j] && f[j]!=0){
				q=f[j];
				w=j;
			}
		}
		g[i]=q;
		f[w]=1001;
	}
	for(int i=0;i<a && i<top;i++){
		printf("%d ",g[i]);
	}
}