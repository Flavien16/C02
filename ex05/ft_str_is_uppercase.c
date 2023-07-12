/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 09:27:40 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/12 10:06:50 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i])
	{
		if (str[i] == 0)
			alpha = 1;
		else if (str[i] >= 65 && str[i] <= 90)
			alpha = 1;
		else
			return (0);
		i++;
	}
	return (alpha);
}

/*int main()
{
    char str1[] = "SALUT";
    char str2[] = "salut";
    char str3[] = "";
    char str4[] = "12345";

    int result1 = ft_str_is_uppercase(str1);
    int result2 = ft_str_is_uppercase(str2);
    int result3 = ft_str_is_uppercase(str3);
    int result4 = ft_str_is_uppercase(str4);

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);
    printf("Result 4: %d\n", result4);

    return 0;
}*/
