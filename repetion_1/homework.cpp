#include <iostream>
#include <Windows.h>
#include <list>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
#include <fstream>

struct worker
{
	std::string surname;
	int experience;
	int salaryPerHours;
	int counterOfHours;

	const double les3year = 0.05;
	const double less5year = 0.08;
	const double more5year = 0.15;

	int salary;

	void Info() {
		std::cout << "Введите фамилию работника: " << "\n";
		std::cin >> surname;

		std::cout << "введите стаж работника: " << "\n";
		std::cin >> experience;
		
		std::cout << "Введите почасовую зп: " << "\n";
		std::cin >> salaryPerHours;

		std::cout << "Введите количество отработанных часов: " << "\n";
		std::cin >> counterOfHours;
	}
	void Salary() {
		if (experience < 1) {
			salary = salaryPerHours * counterOfHours;
		}
		else if (1 < experience <= 3) {
			salary = salaryPerHours * counterOfHours + (salaryPerHours * counterOfHours)*les3year;
		}
		else if (experience > 3 || experience <= 5) {
			salary = salaryPerHours * counterOfHours + (salaryPerHours * counterOfHours) * less5year;
		}
		else if (experience > 5) {

			salary = salaryPerHours * counterOfHours + (salaryPerHours * counterOfHours) * more5year;
		}
	}
	void Print(){
		std::cout << "Фамилия работника: " << surname << "\n";
		std::cout << "Cтаж: " << experience << "\n";
		std::cout << "Часовая зп: " << salaryPerHours << "\n";
		std::cout << "Зарплата: " << salary << "\n";
		

	}
	void Record() {
		std::ofstream worker;
		worker.open("Работник.txt", std::ofstream::app);
		if (!worker.is_open()) {
			std::cout << "Error!";
		}
		else {
			std::cout << "file is open";
			worker << "Фамилия: " << surname << "\n";
			worker << "почасовая зарплата: " << salaryPerHours << "\n";
			worker << "опыт: " << experience << "\n";
			worker << "количество отработанных часов: " << counterOfHours << "\n";
			worker << "итоговая зарплата: " << salary << "\n";


		}
		worker.close();
	}


};


int main() {
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	worker obj;
	obj.Info();
	obj.Salary();
	obj.Print();
	obj.Record();
	
	

	

	


	return 0;
}