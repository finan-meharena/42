/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:21:31 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/24 11:58:28 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_printf(const char *placeholder, ...)
// {
// 	va_list	args;
// 	int		i;
// 	int		tempint;
// 	char	*tempstr;
// 	char	tempchr;

// 	va_start(args, placeholder);
// 	i = 0;
// 	while (placeholder[i])
// 	{
// 		if (placeholder[i] == '%')
// 		{
// 			i++;
// 			if (placeholder[i] == 'd')
// 			{
// 				tempint = va_arg(args, int);
// 				printf("%d", tempint);
// 			}
// 			else if (placeholder[i] == 'c')
// 			{
// 				tempchr = va_arg(args, char);
// 				printf("%c/n", tempchr);
// 			}
// 			else if (placeholder[i] == 's')
// 			{
// 				tempstr = va_arg (args, char  *);
// 				printf("%s\n", tempstr);
// 			}
// 		}
// 		else
// 			ft_putchar_fd(placeholder[i],1 );
// 		i++;
// 	}
// 	va_end (args);
// 	return (0);
// }
int	check_placeholder(char format, va_list args)
{
	if (format == 'c')
		return (print_char(va_arg(args, char)));
	else if (format == 's')
		return (print_str(va_arg(args, char *)));
	// else if (format == 'p')
	// 	return (print_ptr(va_arg(args, void *)))
	else if (format == 'i' || format == 'd')
		return (print_int(va_arg(args, int)));
	// else if (format == 'x' || format == 'X')
	// 	return (print_hex(va_arg(args, int)));
	else if (format == '%')
		return (print_char('%'));
}


int	ft_printf(const char *placeholder, ...)
{
	va_list	args;
	int		counter;
	int		i;

	va_start(args, placeholder);
	i = 0;
	counter = 0;
	while (placeholder[i++])
	{
		if (placeholder[i] != '%')
		{
			counter++;
			ft_putchar_fd(placeholder[i], 1);
			continue ;
		}
		counter += check_placeholder(placeholder[++i], args);
	}
	return counter;
}




int main(){
	char test = 's';

	ft_printf("my name is %c", test);
	return 0;
}