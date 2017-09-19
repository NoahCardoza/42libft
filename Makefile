# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nocardoz <nocardoz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/21 14:12:44 by nocardoz          #+#    #+#              #
#    Updated: 2017/09/18 13:28:17 by nocardoz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
# FILES = main
SRC_DIR = ./srcs
HEADRERS = ./includes

FILESC = ./srcs/*.c
# $(patsubst %, $(SRC_DIR)/%.c, $(FILES))
# $(patsubst %, %.o, $(FILES))

.PHONY: all clean fclean re

all: $(NAME)

# $(FILESO):
# 	@gcc -Wall -Wextra -Werror -c -I $(HEADRERS) $(FILESC)

$(NAME): $(FILESO)
	@gcc -Wall -Wextra -Werror -c -I $(HEADRERS) $(FILESC)
	@ar rc $(NAME) *.o 
	@ranlib $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all



# NAME = libft.a

# FILES = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap
# SRC_DIR = srcs
# FILESC = $(patsubst %, $(SRC_DIR)/%.c, $(FILES))
# FILESO = $(patsubst %, %.o, $(FILES))

# HEADRERS = includes

# all: $(NAME)

# $(NAME):
# 	@gcc -Wall -Wextra -Werror -c -I $(HEADRERS) $(FILESC)
# 	@ar rc $(NAME) $(FILESO)
# 	@ranlib $(NAME)

# clean:
# 	@/bin/rm -f $(FILESO)

# fclean: clean
# 	@/bin/rm -f $(NAME)

# re: fclean all%