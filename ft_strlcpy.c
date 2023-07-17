/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:36:30 by fkidane           #+#    #+#             */
/*   Updated: 2023/07/17 13:36:30 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i])
	{
		dst [i] = src [i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

// int main()
// {
// 	char *src = "Coding is fun!";
// 	char dest[12];

// 	ft_strlcpy(dest, src, 12);
// 	printf("%s\n", dest);
// }