/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:03:53 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/12 13:41:44 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[0] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 32 && str[i -1] <= 47)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 58 && str[i - 1] <= 64)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 91 && str[i - 1] <= 96)
				str[i] = str[i] - 32;
			else if (str[i - 1] >= 123 && str[i - 1] <= 126)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str1[]= "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

        ft_strcapitalize(str1);
        printf("%s\n", str1);
        return (0);
}*/	