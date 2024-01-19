

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*res;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (size < start)
	{
		res = malloc(sizeof(char) * 1);
		if (!res)
			return (NULL);
		res[0] = '\0';
		return (res);
	}
	if (len + start > size)
		len = size - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (++i < len)
		res[i] = s[start + i];
	res[i] = '\0';
	return (res);
}

/* int main() {
    const char *input_string = "This is a test string";
    unsigned int start_index = 5;
    size_t max_length = 8;

    printf("Input String: %s\n", input_string);
    printf("Start Index: %u\n", start_index);
    printf("Max Length: %zu\n", max_length);
    char *substring = ft_substr(input_string, start_index, max_length);
	if (substring != NULL) {
        printf("Substring: %s\n", substring);
        free(substring); 
    } else {
        printf("Substring failed d\n");
    }
    return 0;
}  //gcc ft_substr.o -L. libft.a -o a */