#include <iostream>
#include <time.h>
#include <cmath>
#include <iomanip>
using namespace std;

void Fill(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\n";
	}
	cout << endl;	
}
void PrintM(int* arr, int size)
{
	cout << "Memory  ---> " << &arr << endl;
}


void Menu()
{
	int size = 10;
	int* arr = new int[size];
	Fill(arr, size);
	Print(arr, size);
	PrintM(arr, size);
	int* arr1 = new int[size+1];
	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr[i];
	}
	cout << "Vvedit novuj element masivu-->\n";
	cin >> arr1[size];
	delete[]arr;
	arr = arr1;
	size++;
	cout << endl;
	Print(arr1, size);
	PrintM(arr1, size);
}

void main()
{
	srand(time(0));

	Menu();















	system("pause");
}