#include <iostream>
using namespace std;
int
main()
{
	int i, min;
	int n = 10;
	int a[10] = { 54, 4, 0, 45, 77, 2, 9, 4, 12, 90 };
	min = a[0];
	for (i = 0; i <= n-1; i++)
	{
		if (i % 2 == 0 && a[i] < min)
			min = a[i];
	}
	cout << min;
	return 0;
}
