#include <unistd.h>
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set);
{
	char *trim;
	int start;
	int end;


}

#include <stdlib.h>
#include <string.h>

// Helper: check if a character is in the set
static int is_in_set(char c, const char *set)
{
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(const char *s1, const char *set)
{
    size_t start;
    size_t end;
    size_t len;
    char *trimmed;

    if (!s1 || !set)
        return (NULL);

    start = 0;
    end = strlen(s1);

    // Move start forward while chars are in the set
    while (s1[start] && is_in_set(s1[start], set))
        start++;

    // Move end backward while chars are in the set
    while (end > start && is_in_set(s1[end - 1], set))
        end--;

    len = end - start;

    // Allocate space (+1 for null terminator)
    trimmed = malloc(len + 1);
    if (!trimmed)
        return (NULL);

    // Copy substring manually using strcpy on a temp buffer
    // (as requested to use strcpy)
    {
        char temp[len + 1];      // stack buffer to build substring safely
        size_t i = 0;

        while (i < len)
        {
            temp[i] = s1[start + i];
            i++;
        }
        temp[i] = '\0';

        strcpy(trimmed, temp);   // <--- uses strcpy
    }

    return trimmed;
}