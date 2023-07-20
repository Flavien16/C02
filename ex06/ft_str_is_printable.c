/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:07:46 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/20 11:35:15 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i])
	{
		if (str[i] == 0)
			alpha = 1;
		else if (str[i] >= 32 && str[i] <= 126)
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
    char str4[] = "123045\n";

    int result1 = ft_str_is_printable(str1);
    int result2 = ft_str_is_printable(str2);
    int result3 = ft_str_is_printable(str3);
    int result4 = ft_str_is_printable(str4);

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);
    printf("Result 4: %d\n", result4);

    return 0;
}*/
