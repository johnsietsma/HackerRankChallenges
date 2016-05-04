#include <iostream>
#include <cstdio>
using namespace std;

#include <iostream>
#include <cstdio>
using namespace std;

void print_number(int input) {
	if (input == 1) std::cout << "one";
	else if (input == 2) std::cout << "two";
	else if (input == 3) std::cout << "three";
	else if (input == 4) std::cout << "four";
	else if (input == 5) std::cout << "five";
	else if (input == 6) std::cout << "six";
	else if (input == 7) std::cout << "seven";
	else if (input == 8) std::cout << "eight";
	else if (input == 9) std::cout << "nine";
	else if (input % 2 == 0) std::cout << "even";
	else std::cout << "odd";
	std::cout << std::endl;
}

int main() {
	int input1;
	int input2;
	std::cin >> input1;
	std::cin >> input2;
	for (int i = input1; i <= input2; i++) {
		print_number(i);
	}
	return 0;
}
