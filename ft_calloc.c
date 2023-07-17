/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:31:23 by fkidane           #+#    #+#             */
/*   Updated: 2023/07/17 13:31:23 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*result;

	if (size != 0 && count >= SIZE_MAX / size)
	{
		result = malloc(1);
		result = 0;
		return ((void *)result);
	}
	result = malloc(size * count);
	if (!result)
		return (NULL);
	ft_bzero(result, count * size);
	return ((void *)result);
}
