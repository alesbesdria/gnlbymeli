#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#define BUF_SIZE 3

int		rdfile(int fd)
{
	int i;
	char *buf;
	int nbchar;

	i = 0;
	buf = malloc(BUF_SIZE);
	while (1)
	{
		if (i != BUF_SIZE && i != '\n')
		{
			nbchar = read(fd, buf, BUF_SIZE);
			i++;
		}
		if (buf[i] == '\n')
			return (0);
	}
	return (0);
}

int main(void)
{
	printf("%s", blabla.txt);
}
