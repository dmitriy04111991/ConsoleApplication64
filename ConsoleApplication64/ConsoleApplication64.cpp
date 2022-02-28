
#include <iostream>

using namespace std;

void printArr(int arr[], int dimention);
void calculatingMassiv(int arr[], int dimention);

int main()
{
	int massiv[] = { 1, -2, 3, -4, 0, 0, -7, 8, -9 };
	int arDimention = sizeof(massiv) / sizeof(int);
	cout << "The program searches for the number of" << endl <<
		"positive, negative and zero elements" << endl;
	//выводим на экран исходный массив
	printArr(massiv, arDimention);
	//вызываем функцию подсчета +/-/0 элементов
	calculatingMassiv(massiv, arDimention);
	return 0;
}

void printArr(int arr[], int dimention)
{
	cout << "Start massiv: ";
	for (int i = 0; i < dimention; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void calculatingMassiv(int arr[], int dimention)
{
	int plus = 0;
	int minus = 0;
	int zero = 0;

	for (int i = 0; i < dimention; i++)
	{
		if (arr[i] > 0)
		{
			plus++;
		}
		else if (arr[i] < 0)
		{
			minus++;
		}
		else
		{
			zero++;
		}
	}
	cout << "The number of positive elements = " << plus << endl <<
		"The number of negative elements = " << minus << endl <<
		"The number of zero elements = " << zero << endl;
}