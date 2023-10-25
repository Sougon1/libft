NAME			= libft.a
CC				= gcc
CFLAGS			= -Wall -Werror -Wextra
AR				= ar crs

#########################################################
######  ____   ___  _   _ ____   ____ _____ ____   ######
###### / ___| / _ \| | | |  _ \ / ___| ____/ ___|  ######
###### \___ \| | | | | | | |_) | |   |  _| \___ \  ######
######  ___) | |_| | |_| |  _ <| |___| |___ ___) | ######
###### |____/ \___/ \___/|_| \_\\____|_____|____/  ######
######                                             ######
#########################################################

SRC				= ft_atoi.c \
				ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_strchr.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_tolower.c \
				ft_toupper.c \
 				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \

OBJ			 	= $(SRC:.c=.o)

#####################################
### RULES

all: ${NAME}

${NAME}: ${OBJ}
		 ${AR} $@ $^

%.o: %.c
		${CC} ${CFLAGS} -c $< -o $@
		
clean :
	rm -rf ${OBJ}
	
fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean flcean re