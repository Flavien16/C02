/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:21:29 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/12 09:57:46 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i])
	{
		if (str[i] == 0)
			alpha = 1;
		else if ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122))
			alpha = 1;
		else
			return (0);
		i++;
	}
	return (alpha);
}

/*int main()
{
    char str1[] = "HelloWorld";
    char str2[] = "salut";
    char str3[] = "";
    char str4[] = "12345";

    int result1 = ft_str_is_alpha(str1);
    int result2 = ft_str_is_alpha(str2);
    int result3 = ft_str_is_alpha(str3);
    int result4 = ft_str_is_alpha(str4);

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);
    printf("Result 4: %d\n", result4);

    return 0;
}*/
