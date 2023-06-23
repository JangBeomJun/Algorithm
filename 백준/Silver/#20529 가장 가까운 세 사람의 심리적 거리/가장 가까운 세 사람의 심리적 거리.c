#include <stdio.h>
#include <limits.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char mbti[100000][5];
        for (int i = 0; i < n; i++) {
            scanf("%s", mbti[i]);
        }

        int minDistance = INT_MAX;
        
        if(n>32) printf("0\n");
        else{
        	for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    int distance = 0;
                    for (int l = 0; l < 4; l++) {
                        if (mbti[i][l] != mbti[j][l]) distance++;
                        if (mbti[i][l] != mbti[k][l]) distance++;
                        if (mbti[j][l] != mbti[k][l]) distance++;
                    }
                    if (distance < minDistance) {
                        minDistance = distance;
                    }
                }
            }
        }

        printf("%d\n", minDistance);
		}
        
    }

    return 0;
}
