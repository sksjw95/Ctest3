#include <stdio.h>

void main() {
	int sum = 0;
	int num = 1;
	for (; ;) {
		printf("num(%d) + sum(%d) = ", num, sum);

		sum = sum + num;
		printf("%d\n", sum);
		num++;
			if (num > 5)break;
	}
	printf("\n Result: num = %d sum = %d ", num, sum);
}