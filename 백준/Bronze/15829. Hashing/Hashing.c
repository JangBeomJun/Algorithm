#include <stdio.h>
int main(){
	int a;
	long long s=0,R=1;
	char f[51];
	scanf("%d\n%s",&a,f);
	for(int i=0;i<a;i++){
		s=(s+(f[i]-'a'+1)*R)%1234567891;
		R=(R*31)%1234567891;
	}
	printf("%lld",s);
	return 0;
}