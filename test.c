#include <unistd.h>

int main(void)
{
	char a;
	a = '1';
	write(1, &a+1,1);
}

