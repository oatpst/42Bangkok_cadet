# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwanakit <pwanakit@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/07 15:06:48 by pwanakit          #+#    #+#              #
#    Updated: 2023/10/03 03:15:33 by pwanakit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LOCAL_HEADER_PATH = ./

SRCS += ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c
SRCS += ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c
SRCS += ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRCS += ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c
SRCS += ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strmapi.c ft_strncmp.c
SRCS += ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
SRCS += ft_strlen.c ft_printf.c ft_putnbr_base.c ft_putchar.c ft_putstr.c

BNS_SRCS += ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c
BNS_SRCS += ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
BNS_SRCS += ft_lstdelone_bonus.c ft_lstiter_bonus.c

OBJS =		$(SRCS:.c=.o)
BNS_OBJS =	$(BNS_SRCS:.c=.o)

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror -I ${LOCAL_HEADER_PATH}

.c.o:		$(SRCS)
			$(CC) $(CFLAGS) -c $^ -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) -r $@ $?

bonus:		$(OBJS) $(BNS_OBJS)
			$(AR) -r $(NAME) $?

clean:
			$(RM) $(OBJS) $(BNS_OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		re all clean fclean bonus
