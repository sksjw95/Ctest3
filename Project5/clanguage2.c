#include <stdio.h>
// for문을 이용해서 1부터 100까지 더한 후 그 결과 값을 출력해 보세요.
void main() {
	int sum = 0, i;
	for ( i = 1; i <= 100; i++) {
		sum = sum + i;
		
	}
	printf("Result : %d  sum = %d", i,sum);
}