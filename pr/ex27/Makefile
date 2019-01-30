#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcarver <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 18:41:36 by rcarver           #+#    #+#              #
#    Updated: 2018/11/08 12:05:38 by rcarver          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_display_file.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

test: all
	norminette $(SOURCES)
	./$(NAME) > /dev/null
	./$(NAME) too many arguments > /dev/null
	./$(NAME) unknownfile > /dev/null
	./$(NAME) $(SOURCES) > junk
	diff $(SOURCES) junk
	rm junk

$(NAME): $(SOURCES)
	gcc $(CFLAGS) -o $(NAME) $(SOURCES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
