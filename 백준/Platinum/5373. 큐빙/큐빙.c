#include <stdio.h>
int init_cube[6][3][3];

int dx[8] = { -1,0,1,1,1,0,-1,-1 };
int dy[8] = { -1,-1,-1,0,1,1,1,0 };

void clean_cube(int cube[6][3][3]) {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				cube[i][j][k] = init_cube [i][j][k];
			}
		}
	}
}

void spin_cube(int O, char dir,int cube[6][3][3]) {
	if (dir == '+') {
		int tmp[2] = { cube[O][1][0],cube[O][2][0] };
		for (int i = 7; i >= 2; i--) {
			cube[O][1 + dy[i]][1 + dx[i]] = cube[O][1 + dy[i - 2]][1 + dx[i - 2]];
		}
		cube[O][0][1] = tmp[0];
		cube[O][0][0] = tmp[1];
		
	}
	else if (dir == '-') {
		int tmp[2] = { cube[O][0][0],cube[O][0][1] };
		for (int i = 0; i <= 5; i++) {
			cube[O][1 + dy[i]][1 + dx[i]] = cube[O][1 + dy[i + 2]][1 + dx[i + 2]];
		}
		cube[O][2][0] = tmp[0];
		cube[O][1][0] = tmp[1];
	}
}


void play_cube(char plane, char dir, int cube[6][3][3]) {
	if (plane == 'U') {
		spin_cube(0, dir, cube);
		int tmp[3];
		if (dir == '+') {
			for (int i = 0; i < 3; i++) {
				tmp[i] = cube[3][0][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[3][0][i] = cube[4][0][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[4][0][i] = cube[1][0][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[1][0][i] = cube[5][0][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[5][0][i] = tmp[i];
			}
		}
		else if (dir == '-') {
			for (int i = 0; i < 3; i++) {
				tmp[i] = cube[3][0][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[3][0][i] = cube[5][0][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[5][0][i] = cube[1][0][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[1][0][i] = cube[4][0][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[4][0][i] = tmp[i];
			}
		}
	}
	else if (plane == 'F') {
		spin_cube(1, dir, cube);
		int tmp[3];
		if (dir == '+') {
			for (int i = 0; i < 3; i++) {
				tmp[i] = cube[0][2][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[0][2][i] = cube[4][2 - i][2];
			}
			for (int i = 0; i < 3; i++) {
				cube[4][2 - i][2] = cube[2][0][2 - i];
			}
			for (int i = 0; i < 3; i++) {
				cube[2][0][2 - i] = cube[5][i][0];
			}
			for (int i = 0; i < 3; i++) {
				cube[5][i][0] = tmp[i];
			}
		}
		else if (dir == '-') {
			for (int i = 0; i < 3; i++) {
				tmp[i] = cube[0][2][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[0][2][i] = cube[5][i][0];
			}
			for (int i = 0; i < 3; i++) {
				cube[5][i][0] = cube[2][0][2 - i];
			}
			for (int i = 0; i < 3; i++) {
				cube[2][0][2 - i] = cube[4][2 - i][2];
			}
			for (int i = 0; i < 3; i++) {
				cube[4][2 - i][2] = tmp[i];
			}
		}
	}
	else if (plane == 'D') {
		spin_cube(2, dir, cube);
		int tmp[3];
		if (dir == '-') {
			for (int i = 0; i < 3; i++) {
				tmp[i] = cube[1][2][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[1][2][i] = cube[5][2][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[5][2][i] = cube[3][2][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[3][2][i] = cube[4][2][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[4][2][i] = tmp[i];
			}
		}
		else if (dir == '+') {
			for (int i = 0; i < 3; i++) {
				tmp[i] = cube[1][2][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[1][2][i] = cube[4][2][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[4][2][i] = cube[3][2][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[3][2][i] = cube[5][2][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[5][2][i] = tmp[i];
			}
		}
	}
	else if (plane == 'B') {
		spin_cube(3, dir, cube);
		int tmp[3];
		if (dir == '+') {
			for (int i = 0; i < 3; i++) {
				tmp[i] = cube[0][0][2 - i];
			}
			for (int i = 0; i < 3; i++) {
				cube[0][0][2 - i] = cube[5][2 - i][2];
			}
			for (int i = 0; i < 3; i++) {
				cube[5][2 - i][2] = cube[2][2][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[2][2][i] = cube[4][i][0];
			}
			for (int i = 0; i < 3; i++) {
				cube[4][i][0] = tmp[i];
			}
		}
		else if (dir == '-') {
			for (int i = 0; i < 3; i++) {
				tmp[i] = cube[0][0][2 - i];
			}
			for (int i = 0; i < 3; i++) {
				cube[0][0][2 - i] = cube[4][i][0];
			}
			for (int i = 0; i < 3; i++) {
				cube[4][i][0] = cube[2][2][i];
			}
			for (int i = 0; i < 3; i++) {
				cube[2][2][i] = cube[5][2 - i][2];
			}
			for (int i = 0; i < 3; i++) {
				cube[5][2 - i][2] = tmp[i];
			}
		}
	}
	else if (plane == 'L') {
		spin_cube(4, dir, cube);
		int tmp[3];
		if (dir == '+') {
			for (int i = 0; i < 3; i++) {
				tmp[i] = cube[0][i][0];
			}
			for (int i = 0; i < 3; i++) {
				cube[0][i][0] = cube[3][2 - i][2];
			}
			for (int i = 0; i < 3; i++) {
				cube[3][2 - i][2] = cube[2][i][0];
			}
			for (int i = 0; i < 3; i++) {
				cube[2][i][0] = cube[1][i][0];
			}
			for (int i = 0; i < 3; i++) {
				cube[1][i][0] = tmp[i];
			}
		}
		else if (dir == '-') {
			for (int i = 0; i < 3; i++) {
				tmp[i] = cube[0][i][0];
			}
			for (int i = 0; i < 3; i++) {
				cube[0][i][0] = cube[1][i][0];
			}
			for (int i = 0; i < 3; i++) {
				cube[1][i][0] = cube[2][i][0];
			}
			for (int i = 0; i < 3; i++) {
				cube[2][i][0] = cube[3][2 - i][2];
			}
			for (int i = 0; i < 3; i++) {
				cube[3][2 - i][2] = tmp[i];
			}
		}
	}
	else if (plane == 'R') {
		spin_cube(5, dir, cube);
		int tmp[3];
		if (dir == '+') {
			for (int i = 0; i < 3; i++) {
				tmp[i] = cube[0][2 - i][2];
			}
			for (int i = 0; i < 3; i++) {
				cube[0][2 - i][2] = cube[1][2 - i][2];
			}
			for (int i = 0; i < 3; i++) {
				cube[1][2 - i][2] = cube[2][2 - i][2];
			}
			for (int i = 0; i < 3; i++) {
				cube[2][2 - i][2] = cube[3][i][0];
			}
			for (int i = 0; i < 3; i++) {
				cube[3][i][0] = tmp[i];
			}
		}
		else if (dir == '-') {
			for (int i = 0; i < 3; i++) {
				tmp[i] = cube[0][2 - i][2];
			}
			for (int i = 0; i < 3; i++) {
				cube[0][2 - i][2] = cube[3][i][0];
			}
			for (int i = 0; i < 3; i++) {
				cube[3][i][0] = cube[2][2 - i][2];
			}
			for (int i = 0; i < 3; i++) {
				cube[2][2-i][2] = cube[1][2-i][2];
			}
			for (int i = 0; i < 3; i++) {
				cube[1][2-i][2] = tmp[i];
			}
		}
	}
}

int main() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				init_cube[i][j][k] = i;
			}
		}
	}
	int a,s;
	char d[2000];
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &s);
		for (int j = 0; j < s; j++) {
			scanf(" %c%c",&d[2*j],&d[2*j+1]);
		}
		int cube[6][3][3];	
		clean_cube(cube);
		for (int j = 0; j < s; j++) {
			play_cube(d[2*j], d[2*j + 1], cube);			
		}
		
		for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (cube[0][i][j] == 0) {
				printf("w");
			}
			else if (cube[0][i][j] == 1) {
				printf("r");
			}
			else if (cube[0][i][j] == 2) {
				printf("y");
			}
			else if (cube[0][i][j] == 3) {
				printf("o");
			}
			else if (cube[0][i][j] == 4) {
				printf("g");
			}
			else if (cube[0][i][j] == 5) {
				printf("b");
			}
		}
		printf("\n");
	}
	}
}