#include <unistd.h>

void putstr(char* str)
{
	int i = 0;
	while (str[i])
	{
		write(1, str+i, 1);
		i++;
	}

}
int strLen(char* str)
{
	int i = 0;
	while(str[i])i++;
	return i;
}

int main(int ac, char** av)
{
	if(ac == 3)
	{
		char* str1 = av[1];
		char* str2 = av[2];
		int i = 0;
		int j = 0;
		while (str1[i])
		{
			//j = i;
			while (str2[j])
			{
				if (str1[i] == str2[j])
				{
					if(strLen(str1) == i+1)
						putstr(str1);
					//"faya" "fgvvfdxcacpolhyghbred"
					// 01     0123456789
					//write(1, str2+j, 1);
					j++;
					break;
				}
				j++;
			}
			i++;
		}
	write(1, "\n", 1);
	}
	return 0;
}

