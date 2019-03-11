#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int		ft_iswhitespace(char c);
int		ft_isdigit(int c);
int		isalpha(int c);
int		ft_isalpha(int c);
int		ft_atoi(const char *str);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, char *src, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strstr(const char *haystack, const char *needle);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strcat(char *s1, char const *s2);
char	*ft_strncat(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

#endif
