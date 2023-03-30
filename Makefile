# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 16:45:08 by lumorales         #+#    #+#              #
#    Updated: 2023/03/30 13:21:17 by lumorale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a
PRINTF			=	../ft_printf/libftprintf.a

CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra
RM				=	rm -f
AR				=	ar -rcs

#		COLORS		#
CYELLOW			=\033[1;33m
CGREEN			=\033[0;32m
CRED			=\033[0;91m
CRESET			=\033[0m

SRCS			=	src/ft_isalnum.c \
					src/ft_isalpha.c \
					src/ft_isascii.c \
					src/ft_isdigit.c \
					src/ft_isprint.c \
					src/ft_memset.c \
					src/ft_strlen.c \
					src/ft_strlcpy.c \
					src/ft_strlcat.c \
					src/ft_bzero.c \
					src/ft_memcpy.c \
					src/ft_memmove.c \
					src/ft_toupper.c \
					src/ft_tolower.c \
					src/ft_strchr.c \
					src/ft_strrchr.c \
					src/ft_strncmp.c \
					src/ft_atoi.c \
					src/ft_memchr.c \
					src/ft_strnstr.c \
					src/ft_memcmp.c \
					src/ft_calloc.c \
					src/ft_strdup.c \
					src/ft_substr.c \
					src/ft_strjoin.c \
					src/ft_strtrim.c \
					src/ft_split.c \
					src/ft_itoa.c \
					src/ft_strmapi.c \
					src/ft_striteri.c \
					src/ft_putchar_fd.c \
					src/ft_putstr_fd.c \
					src/ft_putendl_fd.c \
					src/ft_putnbr_fd.c \
					src/ft_lstnew_bonus.c \
					src/ft_lstsize_bonus.c \
					src/ft_lstlast_bonus.c \
					src/ft_lstadd_front_bonus.c \
					src/ft_lstadd_back_bonus.c \
					src/ft_lstdelone_bonus.c \
					src/ft_lstclear_bonus.c \
					src/ft_lstiter_bonus.c \
					src/ft_lstmap_bonus.c \

OBJS			=	$(SRCS:.c=.o)

%.o: %.c
				@$(CC) $(CFLAGS) -c $< -o $@

all:			$(NAME) $(PRINTF)

$(PRINTF):
				@make -C ../ft_printf

$(NAME):		$(OBJS)
				@$(AR) $(NAME) $(OBJS)
				@echo "\n$(CYELLOW)$(NAME) -> $(CGREEN) compiled$(CRESET)"

clean:
				@$(RM) $(OBJS)
				@make -C ../ft_printf clean
				@echo "${CYELLOW}${NAME} $(CGREEN) -> ${CRED} objects files were deleted.${CRESET}"


fclean:			
				@$(RM) $(NAME)
				@make -C ../ft_printf fclean
				@echo "${CYELLOW}${NAME} $(CGREEN) -> ${CRED} was deleted.${CRESET}"


re:				fclean all

.PHONY:			all clean fclean re