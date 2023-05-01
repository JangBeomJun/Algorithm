#include<stdio.h>
int ll(int s){
	int a=0;
	while(s>0){
		s/=10;
		a++;
	}return a;
}
int main(){
	int q, w, e, r;
	int m[50][5]={0,};
	int dir[4][2]={{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
	scanf("%d %d %d %d", &q, &e, &w, &r);
	int x=0, y=0, fl=0;
	int d=0, cnt=1, n=1;
	while(m[0][0]==0||m[w-q][0]==0||m[0][r-e]==0||m[w-q][r-e]==0){
		for(int i=0;i<cnt;i++){
			if(x>=q&&x<=w&&y>=e&&y<=r){
				m[x-q][y-e]=n;
			}
			x+=dir[d][0];
			y+=dir[d][1];
			n++;
		}
		d=(d+1)%4;
		fl++;
		if(fl==2){
			fl=0;
			cnt++;
		}
	}
	int ma=-1;
	for(int i=0;i<=w-q;i++){
		for(int j=0;j<=r-e;j++){
			if(ll(m[i][j])>ma) ma=ll(m[i][j]);
		}
	}
	cnt=ma;
	for(int i=0;i<=w-q;i++){
		for(int j=0;j<=r-e;j++){
			if(j!=0){
				for(int k=0;k<cnt-ll(m[i][j])+1;k++){
					printf(" ");
				}
			}else{
				for(int k=0;k<cnt-ll(m[i][j]);k++){
					printf(" ");
				}
			}
			printf("%d", m[i][j]);
		}
		puts("");
	}
}