# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 14:41:28 by ndesprez          #+#    #+#              #
#    Updated: 2024/01/08 18:18:13 by ndesprez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

NAME = clap

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
		$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

all:	$(NAME)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re