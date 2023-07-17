/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:35:41 by fkidane           #+#    #+#             */
/*   Updated: 2023/07/17 13:35:41 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (s[i] && s[i] != c)
		count++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
		{
			count++ ;
		}
		i++ ;
	}
	return (count);
}

void	ft_fill_ptr(char **res, char const *str, char c)
{
	char const	*temp;

	temp = str;
	while (*str)
	{
		while (*str == c)
		{
			++str;
		}
		temp = str;
		while (*temp != c && *temp)
			++temp;
		if (*temp == c || temp > str)
		{
			*res = ft_substr(str, 0, temp - str);
			res++;
			str = temp;
		}
	}
	*res = (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	char	**result;

	i = 0;
	if (!s)
		return (NULL);
	count = ft_count(s, c);
	result = (char **)malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	ft_fill_ptr(result, s, c);
	return (result);
}
