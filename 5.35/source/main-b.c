#include<stdio.h>
#include<stdlib.h>

unsigned long long int FIB(unsigned int n)
{

	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	return (FIB(n - 1) + FIB(n - 2));

}


int main() 
{
	unsigned long long int input, output;


	for (int i = 0; i <= 4294967295; i++)
	{
		printf("%llu\n", FIB(i));

		if (FIB(i) >= 4294967295)
		{
			break;
		}

	}

	system("pause");
	return 0;

}