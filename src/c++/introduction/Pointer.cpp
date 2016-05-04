#include <stdio.h>
#include <cmath>

void update(int *a, int *b) {
	int a_val = *a;
	*a = *a + *b;
	*b = std::abs(a_val - *b);
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);

	return 0;
}