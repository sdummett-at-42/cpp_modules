# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdummett <sdummett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/09 20:08:23 by sdummett          #+#    #+#              #
#    Updated: 2022/02/07 16:11:59 by sdummett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME	= span
SRCS	= main.cpp Span.cpp
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
