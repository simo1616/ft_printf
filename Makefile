# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbendidi <mbendidi@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 18:47:46 by mbendidi          #+#    #+#              #
#    Updated: 2024/10/10 18:47:46 by mbendidi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de la bibliothèque
NAME = libftprintf.a

# Fichiers sources
SRC = ft_printf.c funct_utils1.c funct_utils2.c

# Fichiers objets
OBJ = $(SRC:.c=.o)

# Compilateur et flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Règles
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all