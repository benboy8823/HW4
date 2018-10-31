#include <stdio.h>
#include <stdlib.h>

int main()

{

	char input, output;
	printf("請輸入一個英文字母 : ");
	scanf_s("%c", &input);
	if (input < 91)
	{
		output = input + ('a' - 'A');

	}
	else if(input > 96)
	{
		output = input + ('A' - 'a');
	}

	printf("%c\n", output);
	system("pause");
	return 0;

}