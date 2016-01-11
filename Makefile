# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eebersol <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/11 16:16:05 by eebersol          #+#    #+#              #
#    Updated: 2016/01/11 16:20:22 by eebersol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit.a

SRCS = 

OBJS = $(subst .c,.o,$(SRCS)

CFLAGS = -Wall -Wextra -Werror

all    : $(NAME)

$(NAME) :
	@gcc -c $(CFLAGS) (SRCS) -I .
	@gcc rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Lib compiled"

$(OBJS) : $(NAME)
	@gcc $(CFLAGS) -c $(SRCS)

clean :
	@rm -rf $(OBJS)
	@echo "clean . o"

re : fclean all
