#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int  integerPower(int base, int exponent)
{
	if (exponent > 0)
	{
		return integerPower(base, exponent - 1)*base;
	}
	else return 1;
}

int main() {
	int n, p;

	scanf_s("%d %d", &n, &p);

	printf("%d", integerPower(n, p));

	system("pause");
	return 0;


}