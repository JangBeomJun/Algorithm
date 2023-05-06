#include<stdio.h>
int main(){
	int a,r=0;
	scanf("%d",&a);
	while(1){
		switch(a){
			case 0: printf("%d",r);
			return 0;
			case 3: r++;
			printf("%d",r);
			return 0;
			case 4: printf("-1");
			return 0;
			case 6: r+=2;
			printf("%d",r);
			return 0;
			case 7: printf("-1");
			return 0;
			case 8:  r+=2;
			printf("%d",r);
			return 0;
			case 9: r+=3;
			printf("%d",r);
			return 0;
			case 12: r+=4;
			printf("%d",r);
			return 0;
			default :
				a-=5;
				r++;
		}
	}
}