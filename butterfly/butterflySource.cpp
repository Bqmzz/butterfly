#include<stdio.h>
#include<math.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int *number, n;
	number=&n;
	printf("Input number : ");
	scanf_s("%d", &n);
	for (int i = 1; i <= (2 * n) - 1; i++) {
		for (int j = 1; j <= (2 * n) - 1; j++) {
			if (j <= n - abs(n - i) || j >= n + abs(n - i)) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}