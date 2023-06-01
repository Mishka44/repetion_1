#include <iostream>


// 20.06.23 экзамен по с++

void FillArr(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        std::cout << "¬ведите число: ";
        std::cin >> arr[i];
    }
}

void FillArr2(int* &arr, int* &arr2, int *arr3, int len1, int len2) {
    for (int  i = 0; i < len1; i++)
    {
        arr3[i] = arr[i];
    }
    for (int i = 0; i < len2; i++)
    {
        arr3[i+len1] = arr2[i];
    }
}

void Print(int* &arr, int len) {
    std::cout << "¬аш массив:";
    for (int i = 0; i < len; i++)
    {
        std::cout << arr[i] << ", ";
    }
}


int main2() {
    setlocale(LC_ALL, "ru");
    int size;
    int size2;
    std::cout << "¬ведите количество элементов в массиве: ";
    std::cin >> size;
    
    std::cout << "¬ведите количество элементов в массиве: ";
    std::cin >> size2;

    int* arr = new int[size];
    int* arr2 = new int[size2];
    FillArr(arr, size);
    FillArr(arr2, size2);
    
    int* arr3 = new int[size+size2];
    FillArr2(arr, arr2, arr3, size, size2);
    Print(arr3, size + size2);
    
    

    /*int* arr1 = new int[size];
    for (int i = 0; i < size; i++)
    {
        std::cout << "¬ведите число: ";
        std::cin >> arr1[i];
        arr3[i] = arr1[i];
    }


    int* arr2 = new int[size2];
    for (int i = 0; i < size2; i++)
    {
        std::cout << "¬ведите число: ";
        std::cin >> arr2[i];
        arr3[size + i] = arr2[i];
    }
      

    std::cout << "¬аш итоговый массив: ";
    for (int i = 0; i < size+size2; i++)
    {
        std::cout << arr3[i] << ", ";
    }*/


    


    delete[] arr;
    delete[] arr2;
    delete[] arr3;
    return 0;
}