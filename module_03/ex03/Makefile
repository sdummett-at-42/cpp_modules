# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 20:08:23 by sdummett          #+#    #+#              #
#    Updated: 2022/01/28 19:00:28 by sdummett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= c++ 
CFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME	= diamondTrap
SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJS	= $(SRCS:.cpp=.o)
RMRF	= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RMRF) $(OBJS)

fclean: clean
	$(RMRF) $(NAME)

re: fclean all
