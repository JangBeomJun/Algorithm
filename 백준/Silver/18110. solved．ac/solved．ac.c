#include<stdio.h>
#include<stdlib.h> 
#include<math.h>

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

int main() {
	int a,res=0;
	int number[1000000]={0,};
	scanf("%d",&a);
	if (a == 0){
		printf("0");
		return 0;
	}

	for (int i = 0; i < a; i++){
		scanf("%d",&number[i]);
	}
	qsort(number, a, sizeof(int), compare);
	int x = round(a * 0.15);
	double sum = 0;
	for (int i = x; i < a - x; i++){
		sum += number[i];
	}
	res = round(sum / (a - x * 2));
	printf("%d",res);
}