/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoutinh <dcoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 08:15:23 by dcoutinh          #+#    #+#             */
/*   Updated: 2022/09/05 12:09:44 by dcoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_conversion(char *nptr, int i, long int j)
{
	char	temp;

	temp = *nptr;
	if ((*nptr == '-') || (*nptr == '+'))
	{
		nptr++;
		i--;
	}
	while (('0' <= *nptr) && (*nptr <= '9'))
	{
		j = 10 * j + (*nptr++ - '0');
	}
	if (temp == '-')
		return (j * (-1));
	return (j);
}

long int	ft_atoi(const char *nptr)
{
	size_t		i;
	long int	j;

	i = ft_strlen((const char *)nptr);
	j = 0;
	while ((9 <= *nptr && *nptr <= 15) || (*nptr == ' '))
	{
		nptr++;
		--i;
	}
	return (ft_conversion((char *)nptr, i, j));
}
