# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amarti <amarti@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/24 04:15:04 by amarti            #+#    #+#              #
#    Updated: 2025/01/24 04:31:53 by amarti           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES = 	\


OBJECTS = $(SOURCES:.c=.o) 

CC = gcc
CFLAGS = -Wall -Wextra -Werror
#creation biblio statique
all: $(NAME)
$(NAME): $(OBJECTS)
	$(AR) -r $@ $? 
#compilation avec flag des .c en .o
%.o: %.c
	$(CC) -c $(CFLAGS) $? 

clean:
	rm -f $(OBJECTS)
#nettoyage final 
fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: all bonus clean fclean re