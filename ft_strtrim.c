
#include "libft.h"

static int
	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}

/* #include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main() 
{
	char const *input = "Hello, worl!";
	char const *set = "Hd";

	// Trim the input string
	char *trimmed = ft_strtrim(input, set);

	if (trimmed != NULL) 
	{
		printf("Original: \"%s\"\n", input);
		printf("Trimmed: \"%s\"\n", trimmed);

		free(trimmed);
	} else {
		printf("Memory allocation failed. Unable to trim the string.\n");
	}

	return 0;
}
 */
// start menas index number of s1=o and end = len of s1
//s1 end -1 means last index