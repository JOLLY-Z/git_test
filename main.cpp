#include<iostream>
using namespace std;

void sort(int* arr, int size)
{
	//Linux端为sort函数添加注释
	int tmp = 0;
	for(int i = 0; i < size-1; i++)
	{
		for(int j = 0; j < size-1-i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = {12, 10, 65, 74, 34, 2, 8, 26, 31, 17};

	int size = sizeof(arr) / sizeof(arr[0]);

	sort(arr, size);

	return 0;
}