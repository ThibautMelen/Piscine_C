#include <stdio.h>
#include <stdlib.h>

const int NUM_CHARS = 26;
const char *UPPERCASES = "ABCDEFGHIJKLMNOPQRSTUVWXWZ";
const char *LOWERCASES = "abcdefghijklmnopqrstuvwxwz";


int find_char(char c){
	int i=0;
	for (i=0; i < NUM_CHARS; i++){
		if ((UPPERCASES[i] == c)  || (LOWERCASES[i] == c)) {
			return i;
		}
	}
	return -1;
}


char lower(char c) {
	int i = find_char(c);
	if (i < 0)
		return c;
	return LOWERCASES[i];
}

char* camel_to_snake(char* myCamelWord, char* my_snake_word, int word_length) {
	(void)myCamelWord;
	(void)word_length;
	return (my_snake_word);
}

int ft_is_upp(char letter)
{
	int i;

	i = 0;
	while (UPPERCASES[i])
	{
		if (letter == UPPERCASES[i])
			return (1);
		i++;
	}
	return (0);
}

int ft_strlen_revenge(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (ft_is_upp(str[i]))
			i++;
		i++;
	}
	return (i);
}


char *ft_convert_to_snake(char *camelformat)
{
	int i;
	int j;
	int len;
	char *dest;

	i = 0;
	j = 0;
	len = ft_strlen_revenge(camelformat);
	if (!(dest = malloc(sizeof(dest) * len + 1)))
		return (NULL);
	while (i < len)
	{
		if (ft_is_upp(camelformat[i]))
		{
			dest[j] = '_';
			j++;
			dest[j] = camelformat[i] + 32;
		}
		else
			dest[j] = camelformat[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}


int main(int argc, char **argv) {
	
	if (argc == 2)
		printf("%s", (camel_to_snake(argv[1], ft_convert_to_snake(argv[1]), ft_strlen_revenge(ft_convert_to_snake(argv[1])))));
	printf("\n");
	return (0);
}
