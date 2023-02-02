#include <unistd.h>

int main()
{
	char number = '9';

	while( number >= '0')
	{
		write(1, &number, 1);
		number--;
	}

	return 0;
}
