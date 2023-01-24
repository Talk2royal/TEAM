#include "main.h"
#include <stdio.h>
int main(void)
{
	/*char big = 'A', small = 'a';*/
	int len = _printf("Let's try to printf a simple sentence.\n");
       	int len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
       	_printf("Character:[%c]\n", 'H');
	  printf("Character:[%c]\n", 'H');
	printf("%d\n %d\n", len, len2);

	int retu1 =	_printf("%");
	printf("%d\n", retu1);
	int retu2 = 	printf("%.");
	printf("%d\n", retu2);
	

	return (0);
}
