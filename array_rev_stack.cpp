#include <iostream>
#include <stack>

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
}

void reverse(int arr[], int n)
{
	std::stack<int> stk;
	for (int i = 0; i < n; i++)
	{
		stk.push(arr[i]);
	}
	int j = 0;
	while (!stk.empty())
	{
		arr[j] = stk.top();
		stk.pop();
		j++;
	}
}

int main()
{
	int n;
	std::cout << "Enter the size of array: ";
	std::cin >> n;
	int arr[n];
	std::cout << "Enter the elements of array: ";
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	reverse(arr, n);
	std::cout << "The reversed array: ";
	print(arr, n);
	std::cout << '\n';
	return 0;
}