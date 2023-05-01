#include<stdio.h>
int main(){
	int a,t;
	char d;
	int s[60][60]={0,};
	scanf("%d\n",&a);
	for(int i=1;i<=a;i++){
		t=0;
		for(int j=1;j<=a;j++){
			scanf("%c",&d);
			if(d=='Y') s[i][t++]=j;
		}
		if(i!=a) scanf("\n");
	}
	int fel=-1,r;
	for(int i=1;i<=a;i++){
		t=0;
		int z[60]={0,};
		for(int j=0;;j++){
			if(s[i][j]!=0){
				r=s[i][j];
				if(z[r]==0){
					z[r]++;
					t++;
				}
				for(int k=0;;k++){
					if(s[r][k]==0) break;
					if(s[r][k]!=i && z[s[r][k]]==0){
						z[s[r][k]]++;
						t++;
					}
					
				}
			}
			else break;
		}
		if(t>fel) fel=t;
	}
	printf("%d",fel);
}