#define M 100000000
#include <stdio.h>
#include <string.h>
#include <math.h>
int factorial(int);
int main(){
	char str[10] = { 0 };
	int C, N, T, L, i;
	scanf("%d", &C);
	for (i = 0; i < C; i++){
		scanf("%s %d %d %d", str, &N, &T, &L);
		if (!strcmp(str, "O(N)")){
			if (L * M >= N * T){
				printf("May Pass.\n");
				continue;
			}
			else{
				printf("TLE!\n");
				continue;
			}
		}
		else if (!strcmp(str, "O(N^2)")){
			if ((double)N > sqrt(1000000000)){
				printf("TLE!\n");
				continue;
			}
			if ((long long)L * M >= (long long)N * N * T){
				printf("May Pass.\n");
				continue;
			}
			else{
				printf("TLE!\n");
				continue;
			}
		}
		else if (!strcmp(str, "O(N^3)")){
			if (N > 1000){
				printf("TLE!\n");
				continue;
			}
			if ((long long)L * M >= (long long)N * N * N * T){
				printf("May Pass.\n");
				continue;
			}
			else{
				printf("TLE!\n");
				continue;
			}
		}
		else if (!strcmp(str, "O(2^N)")){
			if (N >= 30){
				printf("TLE!\n");
				continue;
			}
			if ((long long)L * M >= (long long)pow(2, N) * T){
				printf("May Pass.\n");
				continue;
			}
			else{
				printf("TLE!\n");
				continue;
			}
		}
		else if (!strcmp(str, "O(N!)")){
			if (N > 13){
				printf("TLE!\n");
				continue;
			}
			if ((long long)L * M >= (long long)factorial(N) * T){
				printf("May Pass.\n");
				continue;
			}
			else{
				printf("TLE!\n");
				continue;
			}
		}
	}
	return 0;
}


int factorial(int N){
	int i, fact = 1;
	for (i = 1; i < N + 1; i++){
		fact *= i;
	}
	return fact;
}