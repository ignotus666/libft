#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>

static void	print_next(int fd, char **line, char *prefix)
{
	if (*line)
	{
		printf("[%s]: %s", prefix, *line);
		free(*line);
		*line = get_next_line(fd);
	}
}

int	main(int argc, char **argv)
{
	int		fd1;
	int		fd2;
	int		fd3;
	char	*l1;
	char	*l2;
	char	*l3;

	if (argc < 4)
	{
		printf("Usage: %s <file1> <file2> <file3>\n", argv[0]);
		return (1);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	fd3 = open(argv[3], O_RDONLY);
	if (fd1 < 0 || fd2 < 0 || fd3 < 0)
	{
		perror("Error opening files");
		return (1);
	}
	l1 = get_next_line(fd1);
	l2 = get_next_line(fd2);
	l3 = get_next_line(fd3);
	while (l1 || l2 || l3)
	{
		print_next(fd1, &l1, "F1");
		print_next(fd2, &l2, "F2");
		print_next(fd3, &l3, "F3");
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}
