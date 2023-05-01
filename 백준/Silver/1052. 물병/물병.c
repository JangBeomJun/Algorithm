#include<stdio.h>
int main() {
	int a,s;
	scanf("%d %d",&a,&s);
	if(s>=a){
		printf("0");
	}
	else{
		int answer=0;
		while(1){
			int cnt=0;
			int temp=a;
			while(temp>0){
				if(temp%2==0){
					temp/=2;
				}
				else{
					temp/=2;
					cnt++;
				}
			}
			if(s>=cnt){
				break;
			}
			a++;
			answer++;
		}
		printf("%d",answer);
	}
	return 0;
}