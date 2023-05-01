#include<stdio.h>
int main() {
	int y1, y2, m1, m2, d1,d2, t=0;
	int Y_Preset1[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	scanf("%d %d %d", &y1, &m1, &d1);
	scanf("%d %d %d", &y2, &m2, &d2);
	if (y1 + 1000 < y2) { printf("gg"); return 0; }
	if (y1 + 1000 == y2) {
		if (m1 < m2) {
			printf("gg");
			return 0;
		}
		if (m1 == m2) {
			if (d1 <= d2) {
				printf("gg");
				return 0;
			}
		}
	}
	while (1) {
		d1++;
		t++;
		if (d1 > Y_Preset1[m1-1]) {
			if (m1 == 12) y1++;
			if (m1==2 && (y1 % 4 == 0 && (y1 % 100 != 0 || y1 % 400 == 0))) t++;
			d1 = d1 % Y_Preset1[m1 - 1];
			m1 = (m1 % 12) +1;
		};
		if (y1 == y2 && m1 == m2 && d1 == d2) break;
	}
	printf("D-%d", t);
}