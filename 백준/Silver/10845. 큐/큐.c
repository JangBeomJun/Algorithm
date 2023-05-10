#include<stdio.h>
int main(){
	int a[10000];
	int s,d=-1,t=-1,y;
	char f[7];
	scanf("%d",&s);
	for(int i=1;i<=s;i++){
		scanf("%s",f);
		switch(f[0]){
			case 98: //back
				if(d==t) printf("-1\n");
				else printf("%d\n",a[d]);
				break;
			case 101: //empty
				if(d==t) printf("1\n");
				else printf("0\n");
				break;
			case 102: //frount
				if(d==t) printf("-1\n");
				else printf("%d\n",a[t+1]);
				break;
			case 115: //size 
				if(t==-1) printf("%d\n",d+1);
				else printf("%d\n",d-t);
				break;
			default :
				if(f[1]=='u'){ //push 
					scanf("%d",&y);
					a[++d]=y;
				}
				else if(f[1]=='o'){ //pop
					if(d==t) printf("-1\n");
					else{
						printf("%d\n",a[++t]);
					}	
				}
				break;	
		}
	}
}