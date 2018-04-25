/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmykhail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 12:30:05 by kmykhail          #+#    #+#             */
/*   Updated: 2017/10/25 12:30:09 by kmykhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (s1[i])
		i++;
	while (s2[c])
	{
		s1[i] = s2[c];
		i++;
		c++;
	}
	s1[i] = '\0';
	return (s1);
}