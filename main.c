/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xjose <xjose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:28:41 by xjose             #+#    #+#             */
/*   Updated: 2024/07/06 18:05:16 by xjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char *argv[])
{
	char	**result;

	result = ft_split(argv[1], '|');
	while (*result)
	{
		printf("%s\n", *result);
		result++;
	}
	return (0);
}
