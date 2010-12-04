#include "usage.h"

#include <stdlib.h>

/* Function copyright: git */
int xmkstemp(char *template)
{
	int fd;

	fd = mkstemp(template);
	if (fd < 0)
		die("Unable to create temporary file");
	return fd;
}
