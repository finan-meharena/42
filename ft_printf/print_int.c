/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:48:54 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/24 11:34:30 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int c)
{
	int	i;
	int	n;

	n = c;
	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	ft_putnbr_fd(c, 1);
	return (i);
}

// #include <stdio.h>
// int main(){
// 	int number = print_int(1234567890);
// 	printf("%d", number);
// 	return 0;
// }
