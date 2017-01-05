/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 09:30:36 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/04 15:41:35 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libfs.h>

/*
** Combine two strings with the delimiter '/'.
*/

char	*fs_join(const char *path1, const char *path2)
{
	char	*path;
	size_t	l1;
	size_t	l2;

	NULL_GUARD(path1);
	NULL_GUARD(path2);
	l1 = fs__strlen(path1);
	l2 = fs__strlen(path2);
	NULL_GUARD(path = (char*)malloc(l1 + l2 + 2));
	fs__memcpy(path, path1, l1);
	path[l1] = '/';
	fs__memcpy(path + l1 + 1, path2, l2);
	path[l1 + l2 + 2] = 0;
	return (path);
}
