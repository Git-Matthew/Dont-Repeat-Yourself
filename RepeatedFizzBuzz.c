#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//This program lets the user execute FizzBuzz in multiples of 2 times within the same run up to whichever numbers the user chooses.
int n1, n2;

int fizzbuzz(int n)
{
	int i;
	for(i=1;i<=n;++i) //Executes a "for" cycle, setting i equal to 1, adding +1 to i every time the cycle completes and it keeps going until i is greater than n
    {
		if ((i%3==0) && (i%5==0))	//Checks to see if dividing i by both 3 and 5 gives a remainder of 0
		{
            printf("FIZZ BUZZ\n");	//If so then it prints FIZZ BUZZ and \n adds spacing
		}
		else	//Otherwise it...
		{
			if (i%3==0) //Checks to see if dividing i by 3 gives a remainder of 0
			{
				printf("FIZZ\n");	//If so then it prints FIZZ and \n adds spacing
			}
			else //Otherwise it...
			{
				if (i%5==0) //Checks to see if dividing i by 5 gives a remainder of 0
				{
					printf("BUZZ\n");	//If so then it prints BUZZ and \n adds spacing
				}
				else	//Otherwise it...
				{
					printf("Number: %d\n", i);	//Prints the current value of i as in which number was neither fizz nor buzz
				}
			}   
		}
    }
	return 0;
}

void execute(void)
{
	printf("Enter first # for FizzBuzz: ");
	scanf("%d", &n1);
	fizzbuzz(n1);

	printf("Enter Second # for FizzBuzz: ");
	scanf("%d", &n2);
	fizzbuzz(n2);
}

int main(void) //Voids any value that would be returned
{
     //Initializes the variables	
	int times;
	printf("How many times do you want to execute a pair of FizzBuzz tests?");
	scanf("%d", &times);
	while (times>0)
	{
		execute();
		times--;
	}


    return 0; //Returns a value of 0
}
