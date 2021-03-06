/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:02:21 by mafernan          #+#    #+#             */
/*   Updated: 2017/06/13 16:14:43 by mafernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 ** uses memset to write n zero bytes to string s.
*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
