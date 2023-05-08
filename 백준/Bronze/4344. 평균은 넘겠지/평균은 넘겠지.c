#include<stdio.h>
int main(){
	long long int a=0,s=0;// a는 횟수,s는 학생수
	long long int f[1000]={0,};// 걍 배열
	scanf("%lld",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&s);
		double t=0;// t는 학생들 평균
		long long int r=0; //r은 여러 용도로 쓰임
		for(int j=0;j<s;j++){
			scanf("%lld",&f[j]);
			r+=f[j];// 여기서는 평균을 구하기 위한 총합
		}
		t=r/s; //평균구하기 총점/학생수
		r=0; //초기화
		for(int j=0;j<s;j++){
			if(t<f[j]) r++; //여기서는 평균이 넘는 학생수 구하기
		}
		r*=1000000; // 백분울 구하기 시작!
		r/=s; //이러면 비율 뜸 ex)400000, 53136 등등
		if(r%10>4) r+=10; //반올림
		if(r/100000!=0) printf("%lld",r/100000);
		r%=100000;
		printf("%lld.",r/10000);
		r%=10000;
		printf("%lld",r/1000);
		r%=1000;
		printf("%lld",r/100);
		r%=100;
		printf("%lld%%\n",r/10); //출력
	}
}