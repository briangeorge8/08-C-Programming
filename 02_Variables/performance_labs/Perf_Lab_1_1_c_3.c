#include <stdio.h>

int main(void)
{
	// Declares and initializes the required variable types
	int integer = 0;
	float money = 11.23;
	double result = 1.123456789012345;
	char singleChar = 'A';
	
	// Displays the saved content
	printf("The integer's value is %d \n", integer);
	printf("The float's value is %.2f \n", money);
	printf("The double's value is %.15f \n", result);
	printf("The char's value is %c \n", singleChar);

	// Displays the size of each required data type
	printf("The max size of int variables is %d byte(s).\n", sizeof(integer));
	printf("The max size of float variables is %d byte(s).\n", sizeof(money));
	printf("The max size of double variables is %d byte(s).\n", sizeof(result));
	printf("The max size of char variables is %d byte(s).\n", sizeof(singleChar));
	
    // Ends main function & terminates program
	return 0;
}
