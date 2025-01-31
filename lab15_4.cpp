#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *, int *, int *, int *);

int main()
{
	int a = 50, b = 100, c = 500, d = 1000;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		shuffle(&a, &b, &c, &d);
		cout << a << " " << b << " " << c << " " << d << endl;
	}

	return 0;
}

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void shuffle(int *a, int *b, int *c, int *d)
{
	int randNum = rand() % 4;
	if (randNum == 0)
	{
		swap(*a, *b);
	}
	else if (randNum == 1)
	{
		swap(*b, *c);
	}
	else if (randNum == 2)
	{
		swap(*c, *d);
	}
	else if (randNum == 3)
	{
		swap(*a, *d);
	}
}