#include <unistd.h>

int main()
{
        char letter = 'z';
        while(letter >= 'a')
        {
                if (letter % 2 == 1)//if letter is 
                {
                        letter -= 32;
                        write(1, &letter, 1);
                        letter += 32;
                }
                else
                {
                        write(1, &letter, 1);
                }
                letter -=1;
        }
        write(1,"\\n", 2);
	return 0;
}
