/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fs_isdir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:57:06 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/04 14:58:47 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libfs.h>

char	fs_isdir(const char *path)
{
	t_stat	stat_buff;

	if (stat(path, &stat_buff) != 0)
		return (FALSE);
	return (S_ISDIR(stat_buff.st_mode));
}
