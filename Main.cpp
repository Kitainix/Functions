#include <iostream>

int sum(int num1, int num2) {
	return num1 + num2;
}

void hi() {
	std::cout << "Hello World!\n";
}

// Фукнция для вывода массива в консоль.
void printArr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

void mult_x5(int num) { // "num" - параметр функции.
	num *= 5;
}

void arr_x5(int arr[]) {
	arr[1] *= 5;
}

void positiveElements(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] > 0)
			std::cout << i << ' ';
	std::cout << std::endl;

}

unsigned long long factorial(int num) {
	unsigned long long result = 1;
	for (int i = 2; i <= num; i++)
		result *= i;
	return result;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Создание и вызов фукнций.

	hi();
	std::cout << "Введите два числа: ";
	std::cin >> n >> m;
	std::cout << sum(n, m) << std::endl;
	

	// Функции, работающие с массивами.
	
	const int size = 5;
	int arr[size]{ 9, 2, 5, 12, 4 };
	printArr(arr, size);
	
	arr_x5(arr);
	printArr(arr, size);

	n = 7;
	mult_x5(n); // "n" - это аргумент функции.
	std::cout << "n = " << n << std::endl;
	

	// Задача 1. Индексы положительных элементов массива.
	
	std::cout << "Задача 1.\n";
	const int size1 = 5;
	int arr1[size1]{ 10, 0, 5, -7, 15 };
	printArr(arr1, size1);
	std::cout << "Индексы положительных элементов:\n";
	positiveElements(arr1, size1);
	std::cout << '\n';
	

	// Задача 2. Факториал.

	std::cout << "Задача 2.\nВведите число: ";
	std::cin >> n;
	std::cout << n << "!= " << factorial(n) << std::endl;


	return 0;
}