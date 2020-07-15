#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float calculate(float x, char symb, float y) //Calculates an operation given by the arguments
{
	switch(symb)
	{
		case '+':
			printf("Addition: %.2f \n", (x + y));
			break;
		case '-':
			printf("Subtraction: %.2f \n", (x - y));
			break;
		case 'x':
			printf("Multiplication: %.2f \n", (x * y));
			break;
		case '/':
			printf("Division: %.2f \n", (x / y));
			break;
		default:
			printf("Syntax ERROR \n");
	}
	return (0);
}
int main(int argc, char ** argv)
{
	float num1=atof(argv[1]);
	float num2=atof(argv[3]);
	char symbol=argv[2][0];
	calculate(num1,symbol,num2); //Executes the operation with the numbers and correct character
	return (0);
}

