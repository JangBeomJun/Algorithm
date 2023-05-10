#include<stdio.h>
#include <stdlib.h>
int a,s;
int cards[500000];
int compare(const void *a, const void *b){
    int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    if (num1 < num2)    // a가 b보다 작을 때는
        return -1;      // -1 반환
    
    if (num1 > num2)    // a가 b보다 클 때는
        return 1;       // 1 반환
    
    return 0;    // a와 b가 같을 때는 0 반환
}
int lowerBound(int n){
	int l=0,h=a-1,m;
	while(1){
		m=(l+h)/2;
		if (l>h){
			if (cards[l]==n) return l;
			else return -1;
		}
		if (cards[m]>=n) h=m-1;
		else l=m+1;
	}
}
int upperBound(int n){
	int l=0,h=a-1,m;
	while(1){
		m=(l+h)/2;
		if (l>h){
			if (cards[h]==n) return l;
			else return -1;
		}
		if (cards[m]<=n)l=m+1;
		else h=m-1;
	}
}
int main(){
	scanf("%d",&a);
	for (int i=0;i<a;i++){
		scanf("%d",&cards[i]);
	}
	qsort(cards, a, sizeof(int), compare);
	scanf("%d",&s);
	int n, res;
	for (int i = 0; i < s; i++){
		scanf("%d",&n);
		res = upperBound(n);
		if (res == -1) printf("0 ");
		else printf("%d ",res - lowerBound(n));
	}
	return 0;
}