/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:27:18 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/16 12:24:42 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_BONUS_H
# define PIPEX_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <sys/wait.h>
# include <fcntl.h>
# include "../ft_printf/ft_printf.h"

# define BUFFER_SIZE 4096

typedef struct s_ct {
	int		i;
	int		k;
	int		ii;
	int		kk;
	int		i_path;
	int		turn;
	int		child;
}	t_ct;

typedef struct s_len {
	int		len;
}	t_len;

typedef struct s_all {
	char	*envp_path;
	char	**cmd;
	int		argc;
	int		*fd;
	int		fd_child;
	int		fd_dady;
	int		*pipe;
	int		nbr_cmd;
	char	*cmd_path;
	char	*path;
	pid_t	*pid;
	t_len	len;
	t_ct	ct;
}	t_all;

/********************* Fonctions *********************/

char	*find_good_path(char **paths, char *cmd_path, char *cmd, t_all *all);
void	child(t_all *all, char *argv, char **envp);
char	*check_path(t_all *all, char *cmd, char **envp);
char	*find_path(t_all *all);
// void	free_main(t_all *all);

/* lib */
char	*ft_substr(char const *src, unsigned int start, size_t len);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*init_path(t_all *all, char *argv, char **envp);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
char	**ft_split(char const *s, char c);
char	*ft_strdup(char *src);
char	*div_cmd(char *str);

void	ft_putstr_fd(char *str, int fd);

int		ft_open_fd(char *str, int i);

void	check_entry(t_all *all, char **argv);
void	free_all(t_all *all, char *str);
void	free_ptr(char **tab);

bool	ft_heredoc(t_all *all, char *limiter);
void	do_it(t_all *all, char *cmd, char **envp);

char	*div_cmd(char *str);

size_t	ft_strlen(const char *str);

#endif
