#include <stdio.h>

int main(void) {
	int n, i, j;
	scanf("%d", &n);

	char mat[n][n];
	for (i = 0; i < n; i++) {
		scanf("%s", mat[i]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (mat[i][j] != mat[j][i]) {
				printf("No\n");
				return 0;
			}
		}
	}

	printf("Yes\n");
	return 0;
}
