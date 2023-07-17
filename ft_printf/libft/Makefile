# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sabdulqa <sabdulqa@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/08 13:59:37 by sabdulqa          #+#    #+#              #
#    Updated: 2023/02/24 11:39:32 by sabdulqa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_itoa.c  ft_putendl_fd.c ft_putchar_fd.c ft_putnbr_fd.c \
					ft_putstr_fd.c  
OBJS			= $(SRCS:.c=.o)

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re bonus