#include <iostream>
using namespace std;
 int main()
{
	int i, d;
	int n = 7;
	int m[7] = { 1, 2, 7, 10, 13, 14, 19 };
	d = m[1] - m[0];
	cout << d << endl;
	for (i = 1; i <= n - 2; i++)
	{
		if (m[i + 1] - m[i] == d)
			cout << d << " ";
		else
			cout << 0 << " ";
	}
	return 0;
}