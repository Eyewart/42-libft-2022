/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrifi-la <hrifi-la@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:23:30 by hrifi-la          #+#    #+#             */
/*   Updated: 2022/01/17 21:52:22 by hrifi-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

//memmove
int main()
{
    char str1[] = "GeeksBla"; // Array of size 100
    puts("str1 before memmove \n");
    puts(str1);
  
    /* Copies contents of str2 to sr1 */
  
	/*printf("ft_memmove: %s\n", ft_memmove(str1, &str1[2], 5));
	ft_memcpy(&str1[0], "GeeksBla", 8);
	printf("memmove: %s\n\n", memmove(str1, &str1[2], 5));*/

    printf("ft_memmove: %s\n", ft_memmove(&str1[2], &str1[1], 4));
	ft_memcpy(&str1[0], "GeeksBla", 8);
	printf("memmove: %s\n\n", memmove(&str1[2], &str1[1], 4));

	/*printf("ft_memmove: %s\n", ft_memmove(str1, &str1[2], 5));
	ft_memcpy(&str1[0], "GeeksBla", 8);
	printf("memmove: %s\n", memmove(str1, &str1[2], 5));

	printf("ft_memmove: %s\n", ft_memmove(str1, &str1[2], 5));
	ft_memcpy(&str1[0], "GeeksBla", 8);
	printf("memmove: %s\n", memmove(str1, &str1[2], 5));*/
  
    return 0;
}

//memset
/*
int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);
  
    // Fill 8 characters starting from str[13] with '.'
    ft_memset(NULL, 0, 5);
  
    printf("After memset():  %s", str);
    return 0;
}*/

//ft_itoa
/*int main(void)
{
    int    min = -2147483648;
    int    max = 2147483647;
    int   i1 = 0;
    int   i2 = 45;
    int    i3 = 1000;
    int    i4 = 1010;
    int    i5 = 1001;
    printf("%s\n", ft_itoa(min));
    printf("%s\n", ft_itoa(max));
    printf("%s\n", ft_itoa(i1));
    printf("%s\n", ft_itoa(i2));
    printf("%s\n", ft_itoa(i3));
    printf("%s\n", ft_itoa(i4));
    printf("%s\n", ft_itoa(i5));
    return (0);
}*/

//ft_split
/*void    display_and_free(char **str)
{
	int i;
	i = 0;
    if (str[i] == 0)
		printf("null\n");
	while (str[i] != NULL)
	{
        printf("%s\n", str[i]);
		i++;
	}
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
    free(str);
}

int main(void)
{
    char    *s1 = "++hello++blabla+fld++";
    char    *s2 = "hello++blabla+fld++";
    char    *s3 = "hello++blabla+fld";
    char    *s4 = "+++";
    display_and_free(ft_split(s1, '+'));
    display_and_free(ft_split(s1, 0));
    display_and_free(ft_split(s2, '+'));
    display_and_free(ft_split(s3, '+')); 
    display_and_free(ft_split(s4, '+'));
    display_and_free(ft_split(s3, '+'));
    return (0);
}*/

/*ft_strtrim
void    display_and_free(char *str)
{
    if (str)
        printf("%s\n", str);
    else
        printf("(null)\n");
    free(str);
}

int main(void)
{
    char    *s1 = "Mamamia";
    char    *s2 = "";
    char    *s3 = "+=+-=-+-=";
    char    *s4 = "0123some text 456 and some more789";
    char    *s5 = "x";
    display_and_free(ft_strtrim(s1, "M"));
    display_and_free(ft_strtrim(s1, "a"));
    display_and_free(ft_strtrim(s1, "Ma"));
    display_and_free(ft_strtrim(s1, s1)); // OK
    display_and_free(ft_strtrim(s1, ""));
    display_and_free(ft_strtrim(s1, NULL));
    display_and_free(ft_strtrim(s2, s1));
    display_and_free(ft_strtrim(s2, s2));
    display_and_free(ft_strtrim(s3, "+="));
    display_and_free(ft_strtrim(s4, "0123456789"));
    display_and_free(ft_strtrim(s4, s5));
    display_and_free(ft_strtrim(s5, "")); // to review
    display_and_free(ft_strtrim(s5, s1));
    display_and_free(ft_strtrim(s5, s5));
    display_and_free(ft_strtrim(NULL, "0123456789"));
    display_and_free(ft_strtrim(NULL, NULL));
    return (0);
}*/