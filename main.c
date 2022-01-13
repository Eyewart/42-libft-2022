#include "libft.h"
#include <stdio.h>

//ft_split
void    display_and_free(char **str)
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
    /*display_and_free(ft_split(s1, '+'));
    display_and_free(ft_split(s1, 0));
    display_and_free(ft_split(s2, '+'));
    display_and_free(ft_split(s3, '+')); 
    display_and_free(ft_split(s4, '+'));*/
    display_and_free(ft_split(s3, '+'));
    return (0);
}

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