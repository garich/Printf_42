SRCS =	ft_printf.c\
		ft_puthexa_fd.c\
		ft_putnum_fd.c\
		ft_putptr_fd.c\
		ft_puttext_fd.c\
		ft_putunbr_fd.c\

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I ./libft

$(NAME) : $(OBJS)
	@make -C ./libft
	@cp ./libft/libft.a $(NAME)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

clean :
	@cd libft && make clean
	@$(RM) $(OBJS)
	@echo "clean executed"

fclean : clean
	@$(RM) $(NAME)
	@echo "$(NAME) deleted"
	@echo "fclean executed"

re : fclean all

.PHONY: all clean fclean re