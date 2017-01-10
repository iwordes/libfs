/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs_dirname.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 19:56:39 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/09 20:14:34 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libfs.h>

char	*fs_dirname(const char *path)
{
	size_t	i;

	NULL_GUARD(path);
	i = fs__strlen(path);
	while (path[i] == '/')
		i -= 1;
	while (i > 0 && path[i] != '/')
		i -= 1;
	while (path[i] == '/')
		i -= 1;
	return (fs__strsub(path, 0, i));
}
