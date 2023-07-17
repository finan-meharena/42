/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkidane <finanmeharenak@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:34:28 by fkidane           #+#    #+#             */
/*   Updated: 2023/07/17 13:34:28 by fkidane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (!dst && !src)
		return (0);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}

// int main(){
// 	char s1[50] = "Learningisfun";
// 	char s2[50] = "Learningisfun";
// 	char s3[50] = "Learningisfun";
// 	printf("%s\n", memmove(s1, s3, 3));
// 	printf("%s\n", ft_memmove(s2, s3, 3)); 
// }