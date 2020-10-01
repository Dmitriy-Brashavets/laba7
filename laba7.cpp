#include <vector>
#include <math.h>
#include <iostream>

using std::cout;
using std::endl;
using std::swap;
using std::vector;

void Task1() {
	cout << "task1: " << endl;
	vector <int> vec, res;
	vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 13 };
	for (auto i = vec.begin(); i < vec.end(); i += 2)
	{
		res.push_back(*i);
		if ((i + 1) == vec.end()) break;
	}
	for (auto i = vec.begin() + 1; i < vec.end(); i += 2)
	{
		res.push_back(*i);
		if ((i + 1) == vec.end()) break;
	}
	cout << "initial: ";
	for (auto el = vec.begin(); el != vec.end(); el++)
		cout << *el << " ";
	cout << endl << "result: ";
	for (auto el = res.begin(); el != res.end(); el++)
		cout << *el << " ";
	cout << endl << "========================" << endl;
}

void Task2() {
	cout << "task2: " << endl;
	vector <int> vec;
	int res = 1;
	vec = { 1 , 5, 2, 3, -6, 5, 5, 2 };
	auto iMax = vec.begin();
	auto iMin = vec.begin();
	int max = -1, min = 100;
	for (auto i = vec.begin(); i < vec.end(); i++) {
		if (max < abs(*i)) {
			max = abs(*i);
			iMax = i;
		}
		if (min > abs(*i)) {
			min = abs(*i);
			iMin = i;
		}
	}
	if (iMin > iMax)
		swap(iMin, iMax);
	for (auto i = iMin + 1; i < iMax; i++)
		res *= *i;
	cout << "initial: ";
	for (auto el = vec.begin(); el < vec.end(); el++)
		cout << *el << " ";
	cout << "\nres: " << res;
}

int main() {
	Task1();
	Task2();
}
