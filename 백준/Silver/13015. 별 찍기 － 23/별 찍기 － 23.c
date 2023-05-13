#include<stdio.h>
int main(){
	int a,s,d;
	scanf("%d",&a);
	s=a*2-3;
	d=a-2;
	for(int i=1;i<=a;i++){
		printf("*");
	}
	for(int i=1;i<=s;i++){
		printf(" ");
	}
	for(int i=1;i<=a;i++){
		printf("*");
	}
	printf("\n");
	for(int i=1;i<=d;i++){
		for(int j=1;j<=i;j++){
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=d;j++){
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=s-i*2;j++){
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=d;j++){
			printf(" ");
		}
		printf("*\n");
	}
	for(int i=2;i<=a;i++){
		printf(" ");
	}
		printf("*");
		for(int j=1;j<=d;j++){
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=d;j++){
			printf(" ");
		}
		printf("*\n");
	for(int i=1;i<=d;i++){
		for(int j=0;j<=d-i;j++){
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=d;j++){
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=i*2-1;j++){
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=d;j++){
			printf(" ");
		}
		printf("*\n");
	}
		for(int i=1;i<=a;i++){
		printf("*");
	}
	for(int i=1;i<=s;i++){
		printf(" ");
	}
	for(int i=1;i<=a;i++){
		printf("*");
	}
}