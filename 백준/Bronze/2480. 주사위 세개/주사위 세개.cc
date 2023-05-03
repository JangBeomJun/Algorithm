#include<stdio.h>
#include <algorithm>
using namespace std;
int main(){
	int a[3],i;
	for(i=0;i<=2;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+3);
	if(a[0]==a[2]) printf("%d",10000+1000*a[0]);
	else if(a[0]==a[1] || a[1]==a[2]) printf("%d",1000+100*a[1]);
	else printf("%d",a[2]*100);
	return 0;
}
