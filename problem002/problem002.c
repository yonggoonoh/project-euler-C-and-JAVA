/*
	Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

	1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

	By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <stdio.h>
#define LIMIT 4000000

int main()
{
	int n1 = 1, n2 = 1, result = -1, sum = 0;
	do{
		if (result%2 == 0)
			sum += result;
		result = n1 + n2;
		n1 = n2;
		n2 = result;
	}while (result < LIMIT);
	printf("%d\n", sum);
}
