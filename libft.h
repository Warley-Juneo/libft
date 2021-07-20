#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

typedef struct		s_list
{
	size_t		content_type;
}	t_list;

char *ft_strchr(const char *str, int c);
size_t ft_strlen(const char *str);

#endif