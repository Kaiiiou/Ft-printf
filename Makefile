# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/24 04:15:04 by amarti            #+#    #+#              #
#    Updated: 2025/01/25 09:41:34 by kai-iou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES =		\
	ft_print.c	\
	print_others.c	\
	print_hardothers.c	\
	
OBJECTS = $(SOURCES:.c=.o) 

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJECTS)
	$(AR) -r $@ $? 

%.o: %.c
	$(CC) -c $(CFLAGS) $? 

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME) 

re: fclean all

.PHONY: all bonus clean fclean re