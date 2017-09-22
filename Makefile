# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 14:12:44 by nocardoz          #+#    #+#              #
#    Updated: 2017/09/22 12:39:01 by nocardoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILESC = *.c
FILESO = *.o

HEADERS = .

.PHONY: all clean fclean re

all: $(NAME)

$(FILESO):
	@gcc -Wall -Wextra -Werror -c -I $(HEADERS) $(FILESC)

$(NAME): $(FILESO)
	@ar rc $(NAME) $(FILESO) 
	@ranlib $(NAME)

clean:
	@rm -f $(FILESO)

fclean: clean
	@rm -f $(NAME)

re: fclean all
