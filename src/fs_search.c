/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 14:06:10 by iwordes           #+#    #+#             */
/*   Updated: 2017/02/22 14:14:29 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libfs.h>

bool	fs_search(const char *path, const char *name)
{
	DIR		*dir;
	t_dent	*ent;

	if ((dir = opendir(path)) == NULL)
		return (false);
	while ((ent = readdir(dir)) != NULL)
		if (fs__strcmp(ent->d_name, name) == 0)
			break ;
	closedir(dir);
	return (ent != NULL);
}
