# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 20:08:23 by sdummett          #+#    #+#              #
#    Updated: 2022/01/24 17:36:32 by sdummett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror
NAME	= zombies
SRCS	= main.cpp Zombie.cpp randomChump.cpp newZombie.cpp
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
