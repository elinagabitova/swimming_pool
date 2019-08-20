# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdiane <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 15:47:12 by rdiane            #+#    #+#              #
#    Updated: 2019/08/20 15:57:41 by rdiane           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = $(wildcard srcs/*.c)

INCLUDES = includes/

all: $(NAME)
	
$(NAME):
	@gcc $(NAME).c $(SRC) -I $(INCLUDES) -o $(NAME)

clean:
	@rm -f $(NAME)

re: clean all
