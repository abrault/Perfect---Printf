# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrault <abrault@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/16 10:35:50 by abrault           #+#    #+#              #
#    Updated: 2015/11/16 15:12:09 by abrault          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a

SRC = src/ft_printf.c

LIB = Libft/libft.a

LIB_INC = Libft/includes/

LIB_DIR = Libft

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
		ar rc $(NAME) $(OBJ) $(LIB)
		ranlib $(NAME)

$(LIB):
		cd $(LIB_DIR) && $(MAKE)

%.o: %.c
		gcc -c $(CFLAGS) -I./includes/ $< -o $@ -I . -I./$(LIB_INC)

clean:
		cd $(LIB_DIR) && $(MAKE) clean
		rm -rf $(OBJ) 


fclean: clean
		cd $(LIB_DIR) && $(MAKE) fclean
		rm -rf $(NAME) test

re: fclean all

main: re
	gcc -o test $(CFLAGS) main.c ft_printf.a $(LIB)

