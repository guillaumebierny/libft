SRC = $(shell find . -maxdepth 1 -name "*.c" ! -name "main.c")
BONUS = 
OBJ = $(SRC:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

%o : %c
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all : $(NAME)

$(NAME) : $(OBJ)
	cp libft.a $(NAME)
	ar rc $(NAME) $(OBJ)

bonus : $()

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME) 

re : fclean all

.PHONY : all clean fclean re