#include <iostream>
#include <deque>        
#include <iterator>
#include "Money.h"
#include <vector>
#include <list>
#include <iterator>
#include <stack>
#include <time.h>
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
int SafeInput1(bool strict) {
	int result;
	while (!(cin >> result) || (cin.peek() != '\n') || (strict && result < 0)) {
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
void out(stack<int>str)
{
	int p = str.size();
	if (p == 0)
	{
		cout << "Стек пуст!" << endl;
	}
	else
	{
		for (int i = 0; i < p; i++)
		{
			cout << str.top() << "\t";
			str.pop();
		}
	}
	cout << endl;
}
//////////////////////////////////////////////////////////////
int main()
{
	system("chcp 1251>nul");
	srand(time(NULL));
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

	//cout << "Третье задание:\n";
	//cout << "Введите размер вектора: ";
	//DQ = SafeInput(1);
	//vector<int>A(DQ);
	//for (int i = 0; i < DQ; i++)
	//{
	//	A[i] = random(0, 100);
	//}
	//for (int i = 0; i < DQ; i++)
	//{
	//	cout << A[i] << "  ";
	//}
	//cout << endl;
	//int max = -INT_MAX;
	//for (int i = 0; i < DQ; i++)
	//{
	//	if (max < A[i])
	//	{
	//		max = A[i];
	//	}
	//}
	//A.push_back(max);
	//for (int i = 0; i < DQ+1; i++)
	//{
	//	cout << A[i] << "  ";
	//}
	//cout << "\n============================================================\n";

	//cout << "Четвёртое задание:\n";
	//cout << "Введите размер стека: ";
	//int DQ = SafeInput(1);
	//stack<int>str;
	//stack<int>str2;
	//for (int i = 0; i < DQ; i++)
	//{
	//	str.push(random(0, 100));
	//}
	//out(str);
	//cout << "Введите ключ для удаления элемента: ";
	//int key = SafeInput1(1);
	//int t = 0, t1 = str.size();
	//while (str.top() != key && t != t1)
	//{
	//	str2.push(str.top());
	//	str.pop();
	//	t++;
	//	if (t == t1)
	//	{
	//		break;
	//	}
	//}
	//if (t != t1)
	//{
	//	str.pop();
	//	for (int i = 0; i < t; i++)
	//	{
	//		str.push(str2.top());
	//		str2.pop();
	//	}
	//	out(str);
	//}
	//else
	//{
	//	cout << "Ошибка!\n";
	//}
	//cout << "\n============================================================\n";


	return 0;
}

