#include<stdio.h>

int uc(int a, int b) {
	if (b == 0) return a;
	else return uc(b,a%b);
}

int main() {
	int s,a,b,f;
	scanf("%d", &s);
	for (int i = 0; i < s; i++) {
		scanf("%d %d", &a, &b);
		f = uc(a, b);
		printf("%d %d\n", (a * b) / f, f);
	}
}