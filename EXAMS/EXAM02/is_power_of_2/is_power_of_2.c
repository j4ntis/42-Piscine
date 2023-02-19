int	    is_power_of_2(unsigned int n)
{
	int checker = 1;
	while ((checker*=2) != n)
	{
		if(checker > n)
			return 0;
	}
	return 1;
}
/*
#include <stdio.h>
int main()
{
	printf("%d", is_power_of_2(31));
}
*/

