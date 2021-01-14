#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

vector <int> ft_to_b(int b, int n)
{
	vector <int> res;

	while (n >= b)
	{
		res.push_back(n % b);
		n /= b;
	}
	res.push_back(n);
	return (res);
}
int ft_dec(int a, int* n, int m)
{
	int res;

	res = 0;
	for (int i = 0; i < m; i++)
		res = res * a + n[i];
	return (res);
}

int main()
{
	int a, b, m;
	int *x;
	vector <int> res;

	scanf("%d %d", &a, &b);
	scanf("%d", &m);
	x = (int *)malloc(sizeof(int) * m);
	for (int i = 0; i < m; i++)
		scanf("%d", &x[i]);
	res = ft_to_b(b, ft_dec(a, x, m));
	vector <int> ::reverse_iterator riter;
	for (riter = res.rbegin(); riter != res.rend(); riter++)
		cout << *riter << ' ';
	free(x);
}
