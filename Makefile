# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akitty <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 20:43:59 by akitty            #+#    #+#              #
#    Updated: 2021/11/10 20:44:01 by akitty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

FLAGS		= -Wall -Wextra -Werror

INCLUDES	= -I./includes

SRCS		= ft_printf.c \
				src/ft_print_p.c \
				src/ft_print_s.c \
				src/ft_putchar_mode.c \
				src/ft_putstr_mode.c \
				src/ft_putnbr_base16.c \
				src/ft_putnbr_mode.c \
				src/ft_putnbr_u.c \
				src/ft_putstr_mode.c \
				src/ft_strlen.c \
				src/ft_tolower.c \

OBJ			= ${SRCS:.c=.o}

$(NAME):	${OBJ}
				ar rcs $(NAME) ${OBJ}

%.o : 		%.c
				gcc $(FLAGS) $(INCLUDES) -c $< -o ${<:.c=.o}

all :		${NAME}

clean :
				rm -f $(OBJ)

fclean : 	clean
				rm -f $(NAME)

re :		fclean all

.PHONY:		all clean fclean re
