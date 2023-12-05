NAME	=	libft.a

CC				= gcc
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror

SRCS    		=	ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_strchr.c \
					ft_strlen.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_strrchr.c \
					ft_memset.c \
					ft_memcpy.c \
					ft_bzero.c \
					ft_memmove.c \
					ft_strncmp.c \
					ft_strlcpy.c \
					ft_memchr.c \
					ft_strlcat.c \
					ft_memcmp.c \
					ft_strnstr.c \
					ft_atoi.c \
					ft_strdup.c \
					ft_calloc.c \
					ft_strjoin.c \
					ft_putchar_fd.c \
					ft_substr.c \
					ft_strtrim.c \
					ft_itoa.c \
					ft_strmapi.c \
					ft_striteri.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_split.c \
					ft_putnbr_fd.c \
					
OBJS			=	$(SRCS:.c=.o)

 BONUS			=	ft_lstnew.c \
							ft_lstsize.c \
							ft_lstmap.c \
							ft_lstclear.c \
							ft_lstdelone.c \
							ft_lstadd_back.c \
							ft_lstlast.c \
							ft_lstadd_front.c \
							ft_lstiter.c \


BONUS_OBJS		= 	$(BONUS:.c=.o)

all: ${NAME}

${NAME}:		${OBJS} $(BONUS_OBJS)
				ar rcs $(NAME) ${OBJS}
clean:
				$(RM) $(OBJS) $(BONUS_OBJS)
fclean:			clean
				$(RM) $(NAME)	
bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
re: fclean ${NAME}

.PHONY: all, clean, fclean, re	