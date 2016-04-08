#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#define BUF_SIZE 1

int		rdfile(int fd)
{
	int i;
	char *buf;
	int nbchar;

	i = 0;
	buf = malloc(BUF_SIZE);
	while (1)
	{
		nbchar = read(fd, buf, BUF_SIZE);
		if (buf[i] == '\n' || buf[i] == EOF || nbchar == 0)
			return (nbchar == 0 ? 0 : 1);
		else
			printf("%s", &buf[i]);
	}
}

int main(void)
{
	int fd;
	int retour;

	fd = open("blabla.txt", O_RDONLY);
	retour = rdfile(fd);
	printf("%d\n", retour);
	retour = rdfile(fd);
	printf("%d\n", retour);
	retour = rdfile(fd);
	printf("%d\n", retour);
	retour = rdfile(fd);
	printf("%d\n", retour);
	retour = rdfile(fd);
	printf("%d\n", retour);
	retour = rdfile(fd);
	printf("%d\n", retour);
}
