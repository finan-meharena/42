/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:35:49 by fkidane           #+#    #+#             */
/*   Updated: 2023/07/17 13:35:49 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;
	int		i;

	b = (char)c;
	i = 0;
	if (b == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (b == s[i])
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	printf("%s\n", ft_strchr("salman", 's'));
// 	return 0;
// }