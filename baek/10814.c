#include<stdio.h>
#include <stdlib.h>
typedef struct{
	int a;
	int idx;
	char s[101];
}human;
int compare(const void* a, const void* b){
	human* A = (human*)a;
	human* B = (human*)b;

	if (A->a < B->a)
		return -1;
	else if (A->a > B->a)
		return 1;
	else
	{
		if (A->idx < B->idx)
			return -1;
		else
			return 1;
	}
	return 0;
}
int main(){
	int d;
	scanf("%d",&d);
	human *arr;
	arr = (human *)malloc(sizeof(human) * d);
	for(int i=0;i<d;i++){
    scanf("%d %s",&arr[i].a,arr[i].s);
    arr[i].idx = i;
  }
  qsort(arr,d,sizeof(human),compare);
  for(int i=0;i<d;i++){
    printf("%d %s\n",arr[i].a,arr[i].s); 
  }
  free(arr);
  return 0;
}
