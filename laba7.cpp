#include <vector>
#include <math.h>
#include <iostream>

using std::cout;
using std::endl;
using std::swap;
using std::vector;

void Task1() {
	cout << "task1: " << endl;
	vector <int> vec, rez;
	vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 13 };
	for (int i = 0; i < vec.size(); i += 2)
		rez.push_back(vec[i]);
	for (int i = 1; i < vec.size(); i += 2)
		rez.push_back(vec[i]);
	cout << "initial: ";
	for (int el : vec)
		cout << el << " ";
	cout << endl << "rezult: ";
	for (int el : rez)
		cout << el << " ";
	cout << endl << "========================" << endl;
}

void Task2() {
	cout << "task2: " << endl;
	vector <int> vec;
	int rez = 1;
	vec = { 1 , 5, 2, 3, -6, 5, 5, 2 };
	int iMax, iMin;
	int max = -1, min = 100;
	for (int i = 0; i < vec.size(); i++) {
		if (max < abs(vec[i])) {
			max = abs(vec[i]);
			iMax = i;
		}
		if (min > abs(vec[i])) {
			min = abs(vec[i]);
			iMin = i;
		}
	}
	if (iMin > iMax)
		swap(iMin, iMax);
	for (int i = iMin + 1; i < iMax; i++)
		rez *= vec[i];
	cout << "initial: ";
	for (int el : vec)
		cout << el << " ";
	cout << "\nrez: " << rez;
}

int main() {
	Task1();
	Task2();
}
