#include<stdio.h>
#include<string.h>
int main(){
	int a,d=0,f=0;
	scanf("%d",&a);
	int x[11][11]={0,};
	char r;
	int t=0;
	while((r = getchar()) != EOF){	
		if(r==85){
			if(d==0) continue;
			if(x[d][f]==2 || x[d][f]==3) x[d][f]=3;
			else x[d][f]=1;
			if(x[--d][f]==2 || x[d][f]==3) x[d][f]=3;
			else x[d][f]=1;
		}else if(r==68){
			if(d==a-1) continue;
			if(x[d][f]==2 || x[d][f]==3) x[d][f]=3;
			else x[d][f]=1;
			if(x[++d][f]==2 || x[d][f]==3) x[d][f]=3;
			else x[d][f]=1;
		}else if(r==82){
			if(f==a-1) continue;
			if(x[d][f]==1 || x[d][f]==3) x[d][f]=3;
			else x[d][f]=2;
			if(x[d][++f]==1 || x[d][f]==3) x[d][f]=3;
			else x[d][f]=2;
		}else if(r==76){
			if(f==0) continue;
			if(x[d][f]==1 || x[d][f]==3) x[d][f]=3;
			else x[d][f]=2;
			if(x[d][--f]==1 || x[d][f]==3) x[d][f]=3;
			else x[d][f]=2;
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(x[i][j]==0)printf(".");
			if(x[i][j]==1)printf("|");
			if(x[i][j]==2)printf("-");
			if(x[i][j]==3)printf("+");
		}
		if(i!=a-1)printf("\n");
	}
}