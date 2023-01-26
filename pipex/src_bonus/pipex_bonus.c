/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:28:23 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/16 12:09:15 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex_bonus.h"

void	free_main(t_all *all)
{
	free(all->fd);
	free(all->pid);
	free(all->pipe);
}

void	check_entry(t_all *all, char **argv)
{
	if (open(argv[1], O_RDONLY, 0644) == -1
		|| open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644) == -1)
	{
		perror("Error, wrong open");
		free_main(all);
		exit (0);
	}
}

char	*init_path(t_all *all, char *argv, char **envp)
{
	char	*str;
	char	*ret;
	char	*cmd;

	cmd = ft_calloc(sizeof(char), ft_strlen(argv) + 1);
	if (!cmd)
	{
		perror("Error, wrong alloc <init_path>\n");
		free(cmd);
		exit(0);
	}
	if (access(argv, F_OK | X_OK) == 0)
	{
		cmd = ft_strdup(argv);
		return (cmd);
	}
	str = div_cmd(argv);
	cmd = ft_strdup(str);
	ret = check_path(all, cmd, envp);
	free(cmd);
	return (ret);
}

static void	choose(t_all *all, int argc, char **argv)
{
	if (ft_strnstr(argv[1], "here_doc", 8) && argv[1][8] == '\0')
	{
		ft_heredoc(all, argv[2]);
		all->fd_dady = ft_open_fd(argv[argc - 1], 2);
	}
	else
	{
		all->ct.kk = 2;
		all->fd_child = ft_open_fd("infile", 1);
		all->fd_dady = ft_open_fd("outfile", 2);
		if (!all->fd_child)
		{
			perror("Error, wrong open");
			exit(-1);
		}
		dup2(all->fd_child, STDIN_FILENO);
	}
}

int	main(int argc, char **argv, char **envp)
{
	t_all	all;

	if (argc >= 5)
	{
		choose(&all, argc, argv);
		while (all.ct.kk < argc - 3)
			child(&all, argv[++all.ct.kk], envp);
		dup2(all.fd_dady, STDOUT_FILENO);
		do_it(&all, argv[argc - 2], envp);
	}
	return (0);
}
