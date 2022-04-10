# include "get_next_line.h"
# include <fcntl.h>
# include <stdio.h>

int main()
{
	char *line;
	int fd = open(/* you can put her any file name you whant */"file", O_RDONLY);

	// read all the file
	line  = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		line = get_next_line(fd);
	}
}

// the bonus part its just the same just it work with multiple file descrepters in the same time
