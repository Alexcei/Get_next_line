all:
		gcc -Wall -Wextra -Werror main.c get_next_line.c libft/libft.a -I get_next_line.h
