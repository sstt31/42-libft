# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbadakh <sbadakh@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 13:35:11 by sbadakh           #+#    #+#              #
#    Updated: 2023/11/28 11:59:01 by sbadakh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isdigit.c ft_memset.c ft_isascii.c ft_strlen.c ft_tolower.c\
 ft_bzero.c ft_toupper.c ft_isalnum.c ft_isalpha.c ft_isprint.c \
 ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strncmp.c \
 ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
 ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c \
 ft_substr.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
 ft_itoa.c ft_strmapi.c ft_striteri.c ft_strtrim.c ft_split.c ft_lstdelone_bonus.c


OBJ = $(SRC:.c=.o)

SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c ft_lstsize_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CC = cc 

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)


bonus : $(NAME) $(OBJ_BONUS)
	ar -rcs $(NAME) $(OBJ_BONUS)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean 
	$(MAKE) all

.PHONY: all clean fclean re
	

