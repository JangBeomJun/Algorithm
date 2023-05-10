#include<stdio.h>
#include<string.h>
int main(){
	int a,s,t=-1;
	int d[10000];
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		char f[6];
		scanf("%s",f);
		if(strcmp(f,"push")==0){
			scanf("%d",&s);
			d[++t]=s;
		}
		else if(strcmp(f,"pop")==0){
			if(t==-1) printf("-1\n");
			else {
				printf("%d\n",d[t]);
				d[t--]=0;
			}		
		}
		else if(strcmp(f,"size")==0){
			printf("%d\n",t+1);
		}
		else if(strcmp(f,"empty")==0){
			if(t==-1) printf("1\n");
			else printf("0\n");	
		}
		else if(strcmp(f,"top")==0){
			if(t==-1) printf("-1\n");
			else printf("%d\n",d[t]);
		}
	}
}