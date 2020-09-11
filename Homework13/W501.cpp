#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i = 1, j;
	while (i <= 10) {
		for (j = 1; j <= i; j++)
			printf("* ");
		printf("\n");
		i++;
	}
	return 0;
}