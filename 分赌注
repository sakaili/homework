#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a_win, b_win;
	a_win = 0;
	b_win = 0;
	int a, b,temp,i;
		i = 1;
	while (i<10000)
	{
		a = 10;
		b = 7;
		while (a < 18&&b < 18)
		{
			temp = rand() % 2;
			//printf("%d",temp);//
			if (temp == 0)
			{
				a++;
			}
			if (temp == 1)
			{
				b++;
			}
			if (a == 18)
			{
				a_win = a_win+1;
			}
			if (b == 18)
			{
				b_win = b_win+1;
			}
		}
		i++;
	}
	printf("%d,%d", a_win, b_win);
}
