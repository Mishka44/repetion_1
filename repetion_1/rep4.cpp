#include <iostream>
#include <Windows.h>
#include <list>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>

int compare(const void* x1, const void* x2)   
{
	return (*(int*)x1 - *(int*)x2);             
}

void Sort(std::stack <int> &a){
	int* arr = new int[10];
	int i{ 0 };
	while (!a.empty()) {

		arr[i] = a.top();
		a.pop();
		i++;
	}
	std::qsort(arr, 10, sizeof(int), compare);
	for (int i = 0; i < 10; i++)
	{
		a.emplace(arr[i]);
	}
	delete[]arr;
}

int main4() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	/*std::vector<std::string> temp = { "Hello", "World" };
	for(std::string elem : temp){
		std::cout << elem << " ";
	}
	std::cout << "\n\n";*/
	//std::stack <int, std::vector<int>> a;
	//a.push(1);
	//a.push(10);
	//a.push(6);
	//a.push(2006);
	//a.emplace(21122005);
	//
	////std::cout << a.size();
	//
	////std::cout << a.top(); //выводит последний элемент стэка, stack работает по принципу: last input, first output
	///*while (!a.empty()) {
	//	std::cout << a.top() << " ";
	//	a.pop();
	//}*/
	//std::cout << "\n\n";
	//auto b = a._Get_container();

	//std::cout << b[1];
	
	/*std::queue <std::string, std::vector<std::string> > a;
	a.push("Yeah");
	a.push("Hello Hello");
	a.push("Are you lonely?");
	std::cout << a.size() << "\n";
	std::cout << a.back() << "\n";
	std::cout << a.front() << "\n";*/

	/*while(!a.empty()){
		std::cout << a.front() << "\n";
		a.pop();
	}*/

	/*auto b = a._Get_container();
	std::cout << b[1];
	std::priority_queue <int> c;
	c.push(33);
	c.push(10);
	c.push(6); 
	c.push(2006);

	while (!c.empty()) {
		std::cout << c.top() << " ";
		c.pop();
	}*/

	std::stack<int> numbers;
	int tmp;
	std::cout << "Заполняем наш стэк: " << "\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << "введите число:";
		std::cin >> tmp;
		numbers.push(tmp);
	}
	Sort(numbers);
	std::cout << "ваш отсортированный стэк: ";
	while (!numbers.empty())
	{
		std::cout << numbers.top() << ", ";
		numbers.pop();
	}




	return 0;
}