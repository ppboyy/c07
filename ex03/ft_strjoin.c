// create ft_strlen
// create strcpy
// create entire length of the dest string
// add str to dest
// add seperator to dest if if not the last element

#include <stdio.h>
#include <stdlib.h>
int	ft_strlen(char	*string)
{
	int	i;
	int	counter;
	
	i = 0;
	counter = 0;
	while (string[i])
	{
		counter++;
		i++;
	}
	return (counter);
}

char	*ft_strcpy(char	*dest, char *src)
{

	int	i;
	
	i = 0;
	while(src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

int	ft_stringlength(int size, char **strs, int sep)
{
	int	total_length;
	int	i;
	total_length = 0;
	i = 0;
	
	while (i < size)
	{
		total_length = total_length + ft_strlen(strs[i]);
		if  (i < size -1)
			total_length = total_length + sep;
		i++;
	}
	return (total_length);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final_string;
	int	total_length;
	int	i; //i is the first index of the string'
	
	
	if (size == 0)
		return (final_string = (char *)malloc(1));
	total_length = ft_stringlength(size, strs, ft_strlen(sep));
	i = 0;
	final_string = (char *)malloc(sizeof(char) * total_length + 1);
	while (i< size)
	{
		final_string = ft_strcpy(final_string, strs[i]);
		if (i + 1 < size)
			final_string = ft_strcpy(final_string, sep);
		i++;
	}
	*final_string = '\0';
	return (final_string - total_length);
}
/*
int	main(void)
{
	char	*string[] = {"abc","def","ghi"};
	char	*tab = ".....";
	printf("%s\n", ft_strjoin(3, string, tab));
	return (0);
}
*/
