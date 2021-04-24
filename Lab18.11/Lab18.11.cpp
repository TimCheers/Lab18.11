#include <iostream>
#include <deque>        
#include <iterator>
#include "Money.h"
#include <list>
#include <iterator>
using namespace std;
int SafeInput(bool strict) {
	int result;
	while (!(cin >> result) || (cin.peek() != '\n') || (strict && result <= 0)) {
		cin.clear();
		while (cin.get() != '\n');
		cout << "Введите корректное число!" << endl;
	}
	cin.get();
	return result;
}
int random(int a, int b)
{
	if (a > 0) return a + rand() % (b - a);
	else return a + rand() % (abs(a) + b);
}
void DequeMake(deque<int>& A)
{
	for (int i = 0; i < A.size(); i++)
	{
		A[i] = random(0, 100);
	}
}
void DequeShow(const deque<int>& A)
{
	cout << "\n------------------------------------------------------------\n";
	cout << "Двунаправленная очередь:\n";
	for (int i = 0; i < A.size(); i++)
	{
		cout << A[i] << "  ";
	}
	cout << "\n------------------------------------------------------------\n";
}
//////////////////////////////////////////////////////////////
void ListMake(list<Money>& A, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Сумма " << i + 1 << ": ";
		Money tmp;
		cin >> tmp;
		A.push_back(tmp);
	}
}
void ListShow(list<Money> A, int size)
{
	cout << "\n------------------------------------------------------------\n";
	cout << "List типа Money:\n";
	auto iter = A.begin();
	for (iter; iter != A.end(); iter++)
	{
		iter->show();
	}
	cout << "\n------------------------------------------------------------\n";
}
//////////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251>nul");
	///-------------------------------------------------------------------------------///

	//cout << "============================================================\n";
	//cout << "Первое задание:\n";
	//cout << "Введите размер двунаправленной очереди: ";
	//int DQ = SafeInput(1);
	//deque<int> myDeque(DQ);
	//DequeMake(myDeque);
	//DequeShow(myDeque);
	//cout << "\n============================================================\n";

	///-------------------------------------------------------------------------------///

	//cout << "Второе задание:\n";
	//cout << "Введите размер списка: ";
	//DQ = SafeInput(1);
	//list<Money>List;
	//ListMake(List, DQ);
	//ListShow(List, DQ);
	//cout << "\n============================================================\n";

	///-------------------------------------------------------------------------------///

	return 0;
}

