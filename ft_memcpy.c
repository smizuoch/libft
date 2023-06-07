/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smizuoch <smizuoch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:12:29 by smizuoch          #+#    #+#             */
/*   Updated: 2023/06/01 15:08:56 by smizuoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	return (ft_memmove(dest, src, n));
}

/*#include<stdio.h>
int	main(void) {
	char	src[] = "hello";
	char	dest[6];

	dest[5] = 0;
	ft_memcpy(dest, src, 5);
	printf("%s\n", dest);
	return (0);
}*/