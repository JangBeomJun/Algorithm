#include<stdio.h>
#include <stdlib.h>
int s[100000];
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
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&s[i]);
	}
	qsort(s, a, sizeof(int), compare);
	int z,x,c,v,f;
	scanf("%d",&z);
	for(int i=1;i<=z;i++){
		f=0;
		x=0;
		c=a-1;
		scanf("%d",&v);
		while(1){
			int m=(x+c)/2;
			if(v>s[m]){
				x=m+1;
			}
			else if(v<s[m]){
				c=m-1;
			}
			else{
				f=1;
				break;
			}
//			printf("%d %d %d\n",x,m,c);
			if(x==m || c==m) break;
		}
		if(f==1) printf("1\n");
		else printf("0\n");
	}
}