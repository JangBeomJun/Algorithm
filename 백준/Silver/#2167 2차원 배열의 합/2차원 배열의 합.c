#include<stdio.h>
int main(){
	int d[301][301];
	int a=0,s=0,f=0;
	scanf("%d %d",&a,&s);
	for(int i=1;i<=a;i++){
		for(int j=1;j<=s;j++){
			scanf("%d",&d[i][j]);
		}
	}
	scanf("%d",&f);
	int value;
	for(int k=0;k<f;k++){
		int x1=0,x2=0,y1=0,y2=0;
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		value=0;
		a=x1;
		s=y1;
		while(1){
			value+=d[a][s];
			if(a==x2 && s==y2) break;
			a++;
			if(a>x2){
				s++;
				a=x1;
			}
		}
		printf("%d\n",value);
	}
}