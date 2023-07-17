/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabdulqa <sabdulqa@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:42:44 by sabdulqa          #+#    #+#             */
/*   Updated: 2023/02/24 11:50:32 by sabdulqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"
#include <stdarg.h>

int	print_char(char c);

// int	print_hex(int	c);

int	print_int(int c);

int	print_str(char *str);

void			ft_putstr_fd(char *s, int fd);

size_t			ft_strlen(const char *s);

#endif