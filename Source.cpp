// Встраиваимые функции
#include <iostream>
using namespace std;

inline int myPow(int num) {	
	return num * num;
}
inline int absolute(int num) { // функция для нахождение модуля
	return num < 0 ? -num : num;
}
int maxEl(int num1, int num2) {
	cout << "INT\n";
	return num1 > num2 ? num1 : num2;
	/*if (num1 > num2)
		return num1;
	return num2;*/
}
double maxEl(double num1, double num2) {
	cout << "DOUBLE\n";
	return num1 > num2 ? num1 : num2;
}
bool maxEl(int num1, double num2) {
	cout << "BOOL\n";
	return num1 > num2 ? true : false;
}
int maxEl(int num1, int num2, double num3) {
	cout << "THREE\n";
	if (num1 >= num2 && num1 >= num3)
		return num1;
	if (num2 >= num1 && num2 >= num3)
		return num2;
	return num3;
}
int sum(int num1, int num2) {
	return num1 + num2;
}

template <typename T> T newSum(T num1, T num2) { // шаблонная функция
	return num1 + num2;
}
template <typename T> void showArray(T array[], int length);


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	int a1[5] = { 1, 5, 2, 8, 10 };
	double a2[4] = { 1.2, 1.3, 1.4, 1.5 };
	cout << "Массив int:\n";
	showArray(a1, 5);
	cout << "Массив double:\n";
	showArray(a2, 4);
	cout << "Массив int:\n";
	showArray(a1, 5);


	// Вызов шаблонной функции
	/*cout << newSum(10, 6) << endl; // T = int;
	cout << newSum(1.5, 2.4) << endl; // T = double;
	cout << newSum(true, false) << endl; // T = bool;
	short a = 5, b = 7;
	cout << newSum(a, b) << endl; // T = short;*/


	// Перегруженная функция
	/*cout << maxEl(5, 10) << endl;
	cout << maxEl(1.5, 2.2) << endl;
	cout << maxEl(10, 10.1) << endl;
	cout << maxEl(5, 7, 10) << endl;*/


	// Вызов встроенной функции
	/*cin >> n;
	cout << n << " * " << n << " = " << myPow(n) << endl;*/
	


	return 0;
}
template <typename T> void showArray(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}