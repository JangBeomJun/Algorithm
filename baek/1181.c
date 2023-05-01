#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
int compare(const void* arg1, const void* arg2) {
	//이..이게뭐노 
	if (strlen((const char*)arg1) > strlen((const char*)arg2)) return 1;
	else if (strlen((const char*)arg1) < strlen((const char*)arg2)) return -1;
	else return strcmp((char*)arg1, (char*)arg2);
} 
int main(void){    
	int a;
	char s[20000][51] = { 0 };
	scanf("%d", &a);
	for (int i = 0; i < a; i++)      
		scanf("%s", s[i]);
	qsort(s, a, sizeof(s[0]), compare);
	for (int i = 0; i < a; i++) {
		if (strcmp(s[i], s[i+1]) != 0 || i == a - 1)
			printf("%s\n", s[i]);
	}
	return 0;
}
