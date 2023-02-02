#include <unistd.h>

void maff_alpha(void)
{
	char letter = 'a';
	while(letter <= 'z')
	{
		if (letter % 2 == 0)//if letter is 
		{
			letter -= 32;
			write(1, &letter, 1);
			letter += 32;
		}
		else
		{
			write(1, &letter, 1);
		}
		letter +=1;
	}
	write(1,"\\n", 2);
}
/*
int main()
{
	maff_alpha();
	return 0;
}
*/

