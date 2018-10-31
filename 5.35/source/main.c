#include<stdio.h>
#include<stdlib.h>

unsigned long long int FIB(unsigned int n) 
{

	if (n == 0)
		return 0;

	if (n == 1)
		return 1;

	return (FIB(n - 1) + FIB(n - 2));

}

int main() {
	int input, output;

	scanf_s("%d", &input);
	for (int i = 0; i < input; i++)
	{
		printf("%llu  ", FIB(i));
	}

	system("pause");
	return 0;

}
