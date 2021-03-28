#include <unistd.h>

int main(void)
{
	char a,b,c,test1,test2,test3;
	int i = 0;
	a='1';
	b='1';
	c='1';
	
	i = 42;
	write(1,&i,4);

	return 0;
}

