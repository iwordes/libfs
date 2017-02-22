/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs__strcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 14:00:53 by iwordes           #+#    #+#             */
/*   Updated: 2017/02/22 14:14:22 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libfs.h>

int		fs__strcmp(const char *str1, const char *str2)
{
	size_t	i;

	if (str1 == str2)
		return (0);
	i = 0;
	while (str1[i] == str2[i] && str1[i] != 0)
		i += 1;
	return ((unsigned)(*str1) - (unsigned)(*str2));
}
