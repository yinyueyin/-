#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <errno.h>
#include <fcntl.h>
#include <termios.h>
#include <stdlib.h>
#include <string.h>
#include "sha1.h"
void main(void)
{
	char str[1024] = "\0";
	unsigned long* mac;
	while(1)
	{
		puts("input:");
		gets(str);
		mac=sha1(str,strlen(str));
		printf("SHA1=%08X%08X%08X%08X%08X\n",mac[0],mac[1],mac[2],mac[3],mac[4]);
	}
}
