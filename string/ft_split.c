/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xjose <xjose@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 15:10:25 by xjose             #+#    #+#             */
/*   Updated: 2024/07/07 07:52:11 by xjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_split(const char *s, char c)
{
	char	**result;
	int		i;
	int		p;
	int		start;
	int		x;

	result = (char **)malloc(sizeof(char *) * ft_word_count(s, c) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	p = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			x = 0;
			// result[p] = ft_substr(s, start, i);
			result[p] = (char *)malloc(sizeof(char) * (i - start) + 1);
			while (start < i)
				result[p][x++] = s[start++];
			result[p][x] = '\0';
			p++;
		}
	}
	result[p] = NULL;
	return (result);
}
