CC = cc
CFLAGS = -Wall -Wextra -Werror
CFLAGS_DEBUG = -g3 -fsanitize=address
SRC = \
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_strlen.c\
	ft_memset.c\
	ft_bzero.c\
	ft_strchr.c\
	ft_strlcpy.c\
	ft_strrchr.c\
	ft_strlcat.c\
	ft_memchr.c\
	ft_strncmp.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strnstr.c\
	ft_memcmp.c\
	ft_memmove.c\
	ft_memcpy.c\
	ft_strnstr.c\
	ft_atoi.c\
	ft_strdup.c\
	ft_calloc.c

OBJS = $(SRC:.c=.o)
NAME = libft.a
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(SRC) $(OBJS) -o $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Debug build: rebuild OBJS with debug flags
debug: CFLAGS =+ $(CFLAGS_DEBUG)
debug: clean $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re debug