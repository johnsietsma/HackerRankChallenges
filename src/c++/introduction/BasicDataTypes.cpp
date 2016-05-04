// https://www.hackerrank.com/challenges/cpp-hello-world

#include <cstdio>

int main() {
	int val1;
	long val2;
	long long val3;
	char val4;
	float val5;
	double val6;

	scanf("%d %ld %lld %c %f %lf", &val1, &val2, &val3, &val4, &val5, &val6);
	printf("%d\n%ld\n%lld\n%c\n%f\n%lf", val1, val2, val3, val4, val5, val6);

    return 0;
}
