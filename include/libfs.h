/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwordes <iwordes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 12:39:55 by iwordes           #+#    #+#             */
/*   Updated: 2017/01/04 15:52:27 by iwordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFS_H
# define LIBFS_H

# include <dirent.h>
# include <stdarg.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

# ifndef NULL_GUARD
#  define NULL_GUARD(INPUT) if ((INPUT) == NULL) return (NULL)
# endif

# define FS_VJOIN(ARGS...) fs_pathjoin(ARGS, NULL)

typedef struct stat	t_stat;

/*
** Helpers
*/
char		*fs_join(const char *path1, const char *path2);
char		*fs_vjoin(const char *path, ...);
char		*fs_vjoin_(const char *path, va_list args);

char		**fs_split(const char *path);

char		**fs_listdir(const char *path);
char		**fs_qlistdir(const char *path);

unsigned	fs_dirlen(const char *path);

/*
** Information
*/

//t_stat	*fs_stat(const char *path);
//t_stat	*fs_stat_fd(const int fd);

//t_stat	*fs_lstat(const char *path);
//t_stat	*fs_lstat_fd(const char *path);

//dev_t	fs_(const char *path);
//dev_t	fs_fd(const int fd);

//ino_t	fs_inode(const char *path);
//ino_t	fs_inode_fd(const int fd);

//off_t	fs_size(const char *path);
//off_t	fs_size_fd(const int fd);

//time_t	fs_atime(const char *path);
//time_t	fs_atime_fd(const int fd);

//time_t	fs_mtime(const char *path);
//time_t	fs_mtime_fd(const int fd);

//mode_t	fs_mode(const char *path);
//mode_t	fs_mode_fd(const int fd);

//uid_t	fs_owner(const char *path);
//uid_t	fs_owner_fd(const int fd);

//gid_t	fs_group(const char *path);
//gid_t	fs_group_fd(const int fd);


/*
** Boolean
*/

char	fs_exists(const char *path);

char	fs_isfile(const char *path);
//char	fs_isfile_fd(const int fd);

char	fs_isdir(const char *path);
//char	ft_isdir_fd(const int fd);

//char	fs_issamefs(const char *path1, const char *path2);
//char	fs_issamefs_fd(const int fd1, const int fd2);

/*
** Block/Special devices (ex. HDD/TTY, partition/null)
*/
//char	fs_isdev(const char *path);
//char	fs_isdev_fd(const int fd);

char	fs_isblk(const char *path);
//char	fs_isblk_fd(const int fd);

//char	fs_isspec(const char *path);
//char	fs_isspec_fd(const int fd);

char	fs_islink(const char *path);
//char	fs_islink_fd(const int fd);

char	fs_ispipe(const char *path);
//char	fs_ispipe_fd(const int fd);

char	fs_issock(const char *path);
//char	fs_issock_fd(const int fd);

char	fs_istty(const char *path);
char	fs_istty_fd(const int fd);


/*
** Ops
*/
//int		fs_mkfile(const char *path);
//int		fs_mkdir(const char *path);
//int		fs_mkblk(const char *path);
//int		fs_mkspec(const char *path);
//int		fs_mkpipe(const char *path);
//int		fs_mksock(const char *path);

//char	fs_link(const char *dest, const char *src);
//char	fs_link_fd(const char *dest, const int fd);

//char	fs_delete(const char *path);
//char	fs_delete_fd(const int fd);

//char	fs_copy(const char *dest, const char *src);
//char	fs_copy_fd(const char *dest, const int fd);

//char	fs_move(const char *dest, const char *src);
//char	fs_move_fd(const char *dest, const int fd);


//char	fs_setatime(const char *path, time_t access_time);
//char	fs_setatime_fd(const int fd, time_t access_time);

//char	fs_setmtime(const char *path, time_t modify_time);
//char	fs_setmtime_fd(const int fd, time_t modify_time);

//char	fs_setmode(const char *path, mode_t mode);
//char	fs_setmode_fd(const int fd, mode_t mode);

//char	fs_setowner(const char *path, uid_t owner);
//char	fs_setowner_fd(const char *path , uid_t owner);

//char	fs_setgroup(const char *path, gid_t group);
//char	fs_setgroup_fd(const int fd, gid_t group);

/*
** INTERNAL
*/
char	*fs__strdup(const char *str);
size_t	fs__strlen(const char *str);
void	fs__memcpy(void *dest, const void *src, size_t limit);

#endif
