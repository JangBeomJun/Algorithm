#include<stdio.h>
int main(){
	int a[10]={0,};
	int s[10]={0,};
	int d,f;
	char w;
	long long int total=0;
	while(1){
		scanf("%c",&w);
		if(w==' ') break;
		a[(int)w-48]++;
	}
	while(1){
		scanf("%c",&w);
		if(w=='\n') break;
		s[(int)w-48]++;
	}
	for(long long int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			total+=i*a[i]*j*s[j];
		}
	}
	printf("%lld",total);
}