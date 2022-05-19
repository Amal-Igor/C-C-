#include <stdio.h>
#include <stdint.h>

int fibonacciR(int n)
{	

	if (n <= 1) {
		return n;
	}	
	else
	{	
		//printf_s("%d ", fibonacciR(n - 1) + fibonacciR(n - 2));
		return fibonacciR(n - 1) + fibonacciR(n - 2);
	}
	
}

int fibonacciL(int n)
{
	int first = 0;
	int second = 1;
	int third = 0;

	if (n <= 1) return n;
	else 
	{
			for (int i = 0; i <= n; i++)
			{
				printf_s("%d ", first);
				third = first + second;
				first = second;
				second = third;
			}
	return 0;
	}
	
}

uint32_t fibonacciL_32(int n)
{
	uint32_t first = 0;
	uint32_t second = 1;
	uint32_t third = 0;

	if (n <= 1) return n;
	else
	{
		for (int i = 0; i <= n; i++)
		{
			printf_s("%lu ", first);
			third = first + second;
			first = second;
			second = third;
		}
		return first;
	}

}


int main()
{	

	//fibonacciR(7);
	printf("%d", fibonacciR(8));
	return 0;
}