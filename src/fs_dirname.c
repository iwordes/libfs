/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs_dirname.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 19:56:39 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/10 13:20:43 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libfs.h>

char	*fs_dirname(const char *path)
{
	size_t	i;

	NULL_GUARD(path);
	i = fs__strlen(path);
	if (i > 0)
		i -= 1;
	while (i > 0 && path[i] == '/')
		i -= 1;
	while (i > 0 && path[i] != '/')
		i -= 1;
	while (i > 1 && path[i] == '/')
		i -= 1;
	return (fs__strsub(path, 0, i + 1));
}
