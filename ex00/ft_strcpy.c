/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:40:32 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/14 23:11:22 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src [++i])
		dest [i] = src [i];
	dest [i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	docteur[5];
	char	*str= "salam";

	ft_strcpy(docteur,str);
	printf("%s", docteur);
	return (0);
}*/
