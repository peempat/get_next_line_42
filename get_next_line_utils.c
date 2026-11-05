#include "get_next_line.h"

size_t gnl_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s && s[i] != '\0')
        i++;
    return(i);
}

char    *gnl_strchr(const char *s, int c)
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
char    *gnl_strjoin(const char *s1, const char *s2)
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