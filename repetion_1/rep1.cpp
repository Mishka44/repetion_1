
#include <iostream>
#include <ios>
#include <Windows.h>


template<typename t>
 t sum(t num1, t num2) {
    std::cout << num1 + num2;
}

template<typename type>
type substration(type n1, type n2) {
    std::cout << n1 - n2;
}
template<typename type1,typename  type2>
void multipication(type1 n1, type2 n2) {
   std::cout << n1 * n2;
}

template<typename t>
t divisoin(t n1, t n2) {
    std::cout << n1 / n2;
}

void Up (int &a) {
    a += 1;
}

int main1()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");

    //int choice;
    //int number1;
    //int number2;
    //float number3;

    //std::cout << "Калькулятор:";
    //std::cout << "введите первое число:";
    //std::cin >> number1;
    //std::cout << "Введите второе число: ";
    //std::cin >> number3;
    //std::cout << "Выбор действия: (1-сложение, 2-деление, 3-умножение, 4-вычитание):";
    //std::cin >> choice;

    ////std::cin >> choice;
    //if (choice < 0 || choice >  4) {
    //    std::cout << "Введён некорректный выбор действия";
    //}

    //else if (choice == 1) {
    //    //int sum = number1 + number2;
    //    std::cout << number1 << '+' << number2 << '=' << sum(number1, number2);

    //}
    //if (choice == 2 && number2 != 0) {
    //    std::cout << number1 << '/ ' << number2 << '=' << divisoin(number1, number2);

    //}
    //if (choice == 3) {
    //   multipication(number1, number3);
    //}
    //if (choice == 4) {
    //    std::cout << number1 << "-" << number2 << '= ' << substration(number1, number2);
    //}

    /*switch (choice)
    {
    case 1:
        int sum = number1 + number2;
        std::cout << number1 << '+' << number2 << '=' << sum;
        break;
    case 2:
        if (number2 != 0) {
            std::cout << number1 << '/ ' << number2 << '=' << number1 / number2;
            break;
        }
        else {
            std::cout << "Error";
        }
        break;
    case 3:
        std::cout << number1 << '* ' << number2 << '=' << number1 * number2;
        break;
    case 4:
        std::cout << number1 << "-" << number2 << '=' << number1 - number2;
        break;
    case 5:
        std::cout << number1 << '%' << number2 << '=' << number1 * (number2 / 100);
    default:
        std::cout << "error";
        break;
    }

    return 0;
}*/


    /*std::cout << "Введите число элементов в массиве: ";
    int size;
    int tmp;
    std::cin >> size;
    int *arr = new int [size];
    for (int i = 0; i < size; i++)
    {
        
        std::cout << "Введите число: ";
        std::cin >> arr[i];
    }

    std::cout << "Ваш массив: ";
    std::cout << "[";
    for (int j = 0; j < size; j++)
    {
        std::cout << arr[j] << ", ";
    }
    std::cout << "]";

    delete [] arr;


    int a = 0;
    std::cout << a;
    */
    int a = 0;
    std::cout << a;
    //int b = *a;
    Up(a);
    std::cout << a;
    return 0;
}


