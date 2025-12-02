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
	ft_calloc.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_strtrim.c\
	ft_split.c\
	ft_itoa.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_strmapi.c\
	ft_striteri.c\

BONUS = ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstsize.c\
	ft_lstlast.c\
	ft_lstadd_back.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	ft_lstiter.c\
	ft_lstmap.c\

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)
NAME = libft.a
AR = ar rcs

all: $(NAME)

# $(NAME): $(OBJS) $(BONUS_OBJS)
# 	$(CC) $(CFLAGS) $(SRC) $(OBJS) $(BONUS_OBJS) -o test

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

# Debug build: rebuild OBJS with debug flags
debug: CFLAGS =+ $(CFLAGS_DEBUG)
debug: clean $(NAME)

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re debug