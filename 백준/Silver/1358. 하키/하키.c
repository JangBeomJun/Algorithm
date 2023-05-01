#include<stdio.h>
int main(){
	int a,s,d,f;
	int h;
	scanf("%d %d %d %d %d",&a,&s,&d,&f,&h);
	int r=s/2;
	int x[51], y[51];
	int t=0;
	for(int i=0;i<h;i++){
		scanf("%d %d",&x[i],&y[i]);
		if(x[i]<=d){
			int q=(d-x[i])*(d-x[i]);
			
			int w=((f+r)-y[i])*((f+r)-y[i]);
			if(r*r>=q+w) t++;
		}
		else if(d+a<=x[i]){
			int q=((d+a)-x[i])*((d+a)-x[i]);
			int w=((f+r)-y[i])*((f+r)-y[i]);
			if(r*r>=q+w) t++;
		}
		else if(d<=x[i] && d+a>=x[i] && f<=y[i] && f+s>=y[i]) t++;
	}
	printf("%d",t);
}