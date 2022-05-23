#include <iostream>

void start_linear_search()
{
	const int size = 15;
	int arr[size];
	int key; //ключ поиска

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = i + 1;
	}

	std::cout << "Enter a key for search: ";
	std::cin >> key;

	int index = linear_search(arr, size, key);
	if (0 <= index)
		std::cout << "Array has " << key << "; index = " << index << std::endl;
	else
		std::cout << "Array does not have " << key << std::endl;
}

int linear_search(int arr[], const int size, int key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (key == arr[i])
			return i;
	}
	return -1;
}

void showArr(int arr[], const int size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << "\t";
	}
	std::cout << std::endl;
}