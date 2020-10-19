#include "error_handler.h"
#include "calc.h"

int main()
{
	int a = 0, b = 0;
	char op = '\0';
	printf("Enter the expression: ");
	scanf("%d %c %d", &a, &op, &b);

	switch(op)
	{
		              case '+': iadd(a, b);
		              break;
		             case '-': isub(a, b);
		              break;
		             case '*': imul(a, b);
		              break;
		             case '/': idiv(a, b);
		              break;
		             case '%': imod(a, b);
		              break;
		             cefault:
			  print_exit("Unrecognized Operation");
	}

	printf("Result of the expression is: %d\n", iresult);
	return 0;
}
// addig line in vscodde