/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:50:18 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/09 17:06:44 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(const char *str);
void			*ft_bzero(void *pointer, size_t count);
void			*ft_calloc(size_t num, size_t size);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isalpha(int character);
int				ft_isprint(int c);
void			*ft_memchr(const void *s, int c, size_t size);
int				ft_memcmp (const void *ptr1, const void *ptr2, size_t size);
void			*ft_memcpy (void *dest, const void *src, size_t size);
void			*ft_memmove(void *dest, const void *src, size_t size);
void			*ft_memset(void *pointer, int value, size_t count);
char			*ft_strchr(const char *s, int c);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t			ft_strlen(const char *c);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *s, const char *to_find, size_t len);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower (int c);
int				ft_toupper (int c);

#endif
