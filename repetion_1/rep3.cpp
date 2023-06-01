#include <iostream>
#include <string>
#include <clocale>
#include <Windows.h>
void sort(int* array, int lenght) {
	

	int sizePlus = 0;
	int sizeMinus = 0;
	int sizeNull = 0;
	
	for (int i = 0; i < lenght; i++)
	{
		if (array[i] > 0) {
			sizePlus++;
		}
		else if (array[i] < 0) {
			sizeMinus++;
		}
		else{
			sizeNull++;
		}
	}
	int* arrPlus = new int[sizePlus];
	int* arrMinus = new int[sizeMinus];
	int* arrNull = new int[sizeNull];

	int sizea{ 0 }, sizeb{ 0 }, sizec{0};

	for (int i = 0; i < lenght ; i++)
	{
		if (array[i] > 0) {
			arrPlus[sizea] = array[i];
			sizea++;
		}
		else if(array[i] < 0) {
			arrMinus[sizeb] = array[i];
			sizeb++;
		}
		else {
			arrNull[sizec] = array[i];
			sizec++;
		}
	}
	std::cout << "начальный массив: ";
	for (int i = 0; i < lenght; i++)
	{
		std::cout << array[i] << ", ";
	}

	std::cout << "\n";

	std::cout << "массив нулей: ";
	std::cout << '[';
	for (int i = 0; i < sizeNull; i++)
	{
		std::cout << arrNull[i] << ", ";
	}
	std::cout << ']';

	std::cout << "\n";

	std::cout << "массив положительных: ";
	std::cout << '[';
	for (int i = 0; i < sizePlus; i++)
	{
		std::cout << arrPlus[i] << ", ";
	}
	std::cout << ']';

	std::cout << "\n";
	std::cout << "массив отрицательных: ";
	std::cout << '[';
	for (int i = 0; i < sizeMinus; i++)
	{
		std::cout << arrMinus[i] << ", ";
	}
	std::cout << ']';



	delete[] arrNull;
	delete[] arrMinus;
	delete[] arrPlus;
}



int main3() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// задача 1
	/*s
	char* nameSurname = new char[255];
	std::cout << "введите имя и фамилию: ";
	std::cin.getline(nameSurname, 255);
	char* nameSurname2 = new char[std::strlen(nameSurname)+1];
	for (int i = 0; i < std::strlen(nameSurname2); i++)
	{
		nameSurname2[i] = nameSurname[i];
	}
	std::cout << nameSurname2 << '\n' << std::strlen(nameSurname2);
	delete[] nameSurname;
	delete[] nameSurname2;*/


	//задача 2
	int arr[10]{ 0, -3, -4, 0, 2, 120, 65, 0, 14, -22 };
	sort(arr, 10);


	return 0;
	
}