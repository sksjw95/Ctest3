#include <stdio.h>
// for문을 사용하여 1부터 5까지 더하기
void main() {
	int sum = 0, num;
	for (num = 1; num <= 5; num++) {
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num;
		printf("%d\n", sum);

	}

	printf("\nResult : num = %d  sum = %d\n", num, sum);
}