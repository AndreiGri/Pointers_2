#include <iostream>

void meth_swap_arr(int* arr, int* c)
{
	for (int i = 0; i < *c / 2; i++)
	{
		*(arr + i) += *(arr + *c - 1 - i);
		*(arr + *c - 1 - i) = *(arr + i) - *(arr + *c - 1 - i);
		*(arr + i) -= *(arr + *c - 1 - i);
	}
}

void show_ar(int* num, int* c)
{
	for (int i = 0; i < *c; i++)
	{
		std::cout << ' ' << *(num + i) ;
	}
	std::cout << std::endl;
}

int main()
{
    int ar[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size_ar = std::size(ar);

	show_ar(ar, &size_ar);

	meth_swap_arr(ar, &size_ar);

	show_ar(ar, &size_ar);

	return 0;
}