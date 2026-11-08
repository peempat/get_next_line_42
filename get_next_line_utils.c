#include "get_next_line.h"

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s && s[i] != '\0')
        i++;
    return(i);
}

char    *ft_strchr(const char *s, int c)
{
    size_t  i;

    if(!s)
        return (NULL);
    i = 0;
    while (s[i])
    {
        if(s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if ((char)c == '\0')
        return ((char *)&s[i]);
    return (NULL);
}
char    *ft_strjoin(const char *s1, const char *s2)
{
    char    *result;
    size_t  i;
    size_t  j;

    result = malloc(gnl_strlen(s1) + gnl_strlen(s2) + 1);
    if(!result)
        return (NULL);
    i = 0;
    while (s1 && s1[i])
    {
        result[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2 && s2[j])
    {
        result[i + j] = s2[j];
        j++;
    }
    result[i + j] = '\0'; 
    return (result);
}

char    *ft_extract(const char *stash)
{
    char    *line;
    size_t  len;
    size_t  i;

    len = 0;
    while (stash[len] && stash[len] != '\0')
        len++;
    if(stash[len] == '\n')
        len++;
    line = malloc(len + 1);
    if(!line)
        return (NULL);
    i = 0;
    while (i < len)
        line[i] = stash[i];
        i++;
    line[i] = '\0';
    return (line);
}

char    *ft_keep_reset(char *stash)
{
    size_t i;
    size_t j;

    i = 0;
    while (stash[i] && stash[i] != '\n')
        i++;
    if (stash[i] == '\n')
        i++;
    j = 0;
    while (stash [j] != '\0')
        stash[j] = stash[i];
        i++;
        j++;
    stash [j] = '\0';
    retun (stash);
}
#include <stdio.h>

int main(void) 
{
    // test strchr
    // char *result;

    // printf("strlen: %zu\n", gnl_strlen("Hello"));

    // result = gnl_strchr("Hello World", 'W');
    // if (result)
    //     printf("strchr: %s\n", result);
    // else
    //     printf("Character not found\n");

    // return (0);
    // test gnl_strlen
    // gnl_strchr("Hello\nWorld", '\n');
//     printf("%zu\n", gnl_strlen("Hello"));
//     printf("%zu\n", gnl_strlen("42"));
//     printf("%zu\n", gnl_strlen(""));
//     return (0);
}