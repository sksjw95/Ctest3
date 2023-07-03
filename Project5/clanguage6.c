#include <stdio.h>
// do~while 반복문을 이용하여 1부터 5까지 더하기
void main() {
	int sum = 0;
	int num = 1;
	do {
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num;
		printf("%d\n", sum);
		num++;
	} while (num <= 5);
	printf("\nResult : num = %d sum = %d\n", num, sum);
}