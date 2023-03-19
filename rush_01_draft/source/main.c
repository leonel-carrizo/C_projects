#include<unistd.h>

void	print_ma(int ma[4][4]);

int main(void)
{
	int	ma[4][4]=
	{
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0},
	{0,0,0,0},
	};


	print_ma(ma);
	return 0;
}