SRC	 =	printf_plus.c	\
		lib.c	\
		printf_basic.c 	\
		algo.c


NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

all: $(NAME)
 
$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
 
clean:
		rm -rf $(OBJ)
 
fclean: clean
		rm -rf $(NAME)
 
re: fclean all
