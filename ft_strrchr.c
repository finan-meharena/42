/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:37:46 by fkidane           #+#    #+#             */
/*   Updated: 2023/07/17 13:37:46 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pointer;

	i = 0;
	pointer = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			pointer = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		pointer = (char *)(s + i);
	return (pointer);
}
