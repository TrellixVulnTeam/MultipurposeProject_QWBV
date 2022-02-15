#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void Add()
{
	
	double input1;
	double input2;
	
	printf("\n\nInput your first addend:\n");
	scanf("%lf", &input1);
	printf("\nInput your second addend:\n");
	scanf("%lf", &input2);
	
	double output = input1 + input2;
	printf("\nYour output is:\n");
	printf("%lf", output);
	printf("\n\n\n");
	
	main();
	
}

void Subtract()
{
	
	double input1;
	double input2;
	
	printf("\n\nInput your minuend:\n");
	scanf("%lf", &input1);
	printf("\nInput your subtrahend:\n");
	scanf("%lf", &input2);
	
	double output = input1 - input2;
	printf("\nYour output is:\n");
	printf("%lf", output);
	printf("\n\n\n");
	
	main();
	
}

void Multiply()
{
	
	double input1;
	double input2;
	
	printf("\n\nInput your multiplier:\n");
	scanf("%lf", &input1);
	printf("\nInput your multiplicand:\n");
	scanf("%lf", &input2);
	
	double output = input1 * input2;
	printf("\nYour output is:\n");
	printf("%lf", output);
	printf("\n\n\n");
	
	main();
	
}

void Divide()
{
	
	double input1;
	double input2;
	
	printf("\n\nInput your dividend:\n");
	scanf("%lf", &input1);
	printf("\nInput your divisor:\n");
	scanf("%lf", &input2);
	
	double output = input1 / input2;
	printf("\nYour output is:\n");
	printf("%lf", output);
	printf("\n\n\n");
	
	main();
	
}

void SquareRoot()
{
	
	double input;
	
	printf("\nInput your radicand:\n");
	scanf("%lf", &input);
	
	double output = sqrt(input);
	printf("\nYour output is:\n");
	printf("%lf", output);
	printf("\n\n\n");
	
	main();
	
}

void Power()
{
	
	double input1;
	double input2;
	
	printf("\n\nInput your base:\n");
	scanf("%lf", &input1);
	printf("\nInput your exponent:\n");
	scanf("%lf", &input2);
	
	double output = pow(input1, input2);
	printf("\nYour output is:\n");
	printf("%lf", output);
	printf("\n\n\n");
	
	main();
	
}

int main()
{
	
	bool escape = false;
	
	printf("Welcome to C-Calculator!\n\n");
	printf("If you would like to input, press the required key, then press enter.\n\n");
	printf("Now, please establish which operation you would like to use:\n");
	printf("A (Add)\n");
	printf("S (Subtract)\n");
	printf("M (Multiply)\n");
	printf("D (Divide)\n");
	printf("R (Square Root)\n");
	printf("P (Power)\n\n");
	
	while(true)
	{
		
		char input;
		scanf("%c", &input);
		
		if(input == 'A' || input == 'a')
		{
			
			Add();
			
		}
		else if(input == 'S' || input == 's')
		{
			
			Subtract();
			
		}
		else if(input == 'M' || input == 'm')
		{
			
			Multiply();
			
		}
		else if(input == 'D' || input == 'd')
		{
			
			Divide();
			
		}
		else if(input == 'R' || input == 'r')
		{
			
			SquareRoot();
			
		}
		else if(input == 'P' || input == 'p')
		{
			
			Power();
			
		}
		
	}
	
}