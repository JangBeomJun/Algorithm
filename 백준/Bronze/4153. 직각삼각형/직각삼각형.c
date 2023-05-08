#include<stdio.h>
int main(){
	int s,d,f;
	for(;;){
		scanf("%d %d %d",&s,&d,&f);
		if(s==0) return 0;
		if(s>d && s>f){
			if(s*s==d*d+f*f) printf("right\n");
			else printf("wrong\n");
		}
		else if(d>s && d>f){
			if(d*d==s*s+f*f) printf("right\n");
			else printf("wrong\n");
		}
		else{
			if(f*f==d*d+s*s) printf("right\n");
			else printf("wrong\n");
		}
		
	}
}