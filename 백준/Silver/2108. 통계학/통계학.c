#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
    int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    if (num1 < num2)    // a가 b보다 작을 때는
        return -1;      // -1 반환
    
    if (num1 > num2)    // a가 b보다 클 때는
        return 1;       // 1 반환
    
    return 0;    // a와 b가 같을 때는 0 반환
} 
int main(){
	int a,f=0;
	scanf("%d",&a);
	int s[500000];
	int h[500001];
	int d[8001]={0,};
	for(int i=0;i<a;i++){
		scanf("%d",&s[i]);
		f+=s[i];
		if(s[i]<0) d[s[i]*-1]++;
		else if(s[i]>0)d[s[i]+4000]++;
		else d[s[i]]++;
	}
	qsort(s, a, sizeof(int), compare);
	printf("%d\n",(int)round((double)f /(double)a));
	printf("%d\n",s[a/2]);
	int z=0,x,r=0;
	for(int i=4000;i>0;i--){
		if(d[i]>z){
			z=d[i];
			h[z]=i;
			r=0;
		}
		else if(d[i]==z && r==0){
			h[z]=i;
			r=1;
		}
	}
	if(d[0]>z){
		r=0;
		z=d[0];
		h[z]=0;
	}
	else if(d[0]==z && r==0){
		h[z]=0;
		r=1;
	}
	for(int i=4001;i<=8000;i++){
		if(d[i]>z){
			z=d[i];
			h[z]=i;
			r=0;
		}
		else if(d[i]==z && r==0){
			h[z]=i;
			r=1;
		}
	}
	if(h[z]>4000) printf("%d\n",h[z]-4000);
	else if(h[z]==0) printf("%d\n",h[z]);
	else{
		printf("%d\n",h[z]*-1);
	}
	z=0;
	for(int i=s[0];i<s[a-1];i++){
		z++;
	}
	printf("%d",z);
}