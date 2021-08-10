/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjuneo-f <wjuneo-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:50:00 by wjuneo-f          #+#    #+#             */
/*   Updated: 2021/08/09 21:07:58 by wjuneo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void	*ft_memset(void *b, int c, size_t len);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t len);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s1);

void	*ft_calloc(size_t nelem, size_t size);

char	*ft_strcpy(char *dest, const char *src);

char	*ft_strncpy(char *dest, const char *src, size_t len);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_strcat(char *s1, const char *s2);

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);

char	*ft_strncat(char *s1, const char *s2, size_t n);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

char	*ft_strstr(const char *haystack, const char *needle);

char	*ft_strnstr(const char *haystack,
			const char *needle, size_t len);

int		ft_strcmp(const char *s1, const char *s2);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_atoi(const char *str);

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

char 	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

void	ft_putchar(char c);

void	ft_putstr(char const *s);

void	ft_putendl(char const *s);

void	ft_putnbr(int n);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void 	ft_putnbr_fd(int n, int fd);

int		ft_isupper(int c);

int		ft_islower(int c);

int		ft_isspace(int c);

size_t	ft_strnlen(const char *s, size_t maxlen);

char	*ft_strndup(const char *s1, size_t n);

char	ft_mapi_uppercase (unsigned int i, char str);

void	ft_mapi_lowercase (unsigned int i, char *str);

t_list *ft_lstnew(void *content);

void ft_lstadd_front(t_list **lst, t_list *new);

t_list *ft_lstlast(t_list *lst);

#endif
