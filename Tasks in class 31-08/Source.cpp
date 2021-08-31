#include <iostream>

int TaskChoice{};
int CheckNumber1{};
void task1();
void task2();

int main() {
	std::cout << "Which task would you like to do?" << std::endl << "1. Check if a number is even and above 20 or not" << std::endl
		<< "2. Print each number from 1 to 10" << std::endl;
	std::cin >> TaskChoice;
	if (TaskChoice == 1) {
		task1();
	}
	else if (TaskChoice == 2) {
		task2();
	}
	else {
		std::cout << "Invalid input!" << std::endl;
	}

}

void task1() {
	system("cls");
	std::cout << "Please enter a number" << std::endl;
	std::cin >> CheckNumber1;
	if (CheckNumber1 >= 20) {
		if (CheckNumber1 % 2 == 0) {
			std::cout << CheckNumber1 << " is even, and above 20!" << std::endl;
		}
		else {
			std::cout << CheckNumber1 << " is above 20, but is not even!" << std::endl;
		}
	}
	else {
		std::cout << CheckNumber1 << " is under 20!" << std::endl;
	}
}

void task2() {
	system("cls");
	for (int i = 1; i <= 10; i++) {
		std::cout << i << std::endl;
	}
}