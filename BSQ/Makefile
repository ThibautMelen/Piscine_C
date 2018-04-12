# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmelen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/26 19:41:54 by thmelen           #+#    #+#              #
#    Updated: 2018/02/28 23:40:55 by dchampag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRCS = srcs/ft_basic_print.c srcs/ft_basic_string.c srcs/ft_bsq_print.c srcs/ft_bsq_resolver.c srcs/ft_bsq_resolver_one_line.c \
		srcs/ft_custom_string.c srcs/ft_file_verify.c srcs/ft_map_error.c srcs/ft_parse_int.c srcs/ft_verify_error.c srcs/main.c

FLAGS = -Wall -Wextra -Werror

INCLUDES = includes/

all : $(NAME)

$(NAME) : $(SRCS)
	gcc $(FLAGS) -o $(NAME) $(SRCS) -I $(INCLUDES)

clean :
	rm -f $(NAME):

fclean :
	clean

re : clean all
