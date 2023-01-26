/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nadesjar <dracken24@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:16:54 by nadesjar          #+#    #+#             */
/*   Updated: 2022/08/16 12:24:12 by nadesjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex_bonus.h"

// void	kill_child(t_all *all, int error, char **options);

void	child(t_all *all, char *argv, char **envp)
{
	pid_t	pid;
	int		fd[2];

	if (pipe(fd) == -1)
	{
		ft_printf("pipe error\n");
		exit(-1);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("Error, fork <child>");
		exit(-1);
	}
	if (pid == 0)
	{
		close(fd[0]);
		dup2(fd[1], STDOUT_FILENO);
		do_it(all, argv, envp);
	}
	else
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		waitpid(pid, NULL, 0);
	}
}

void	do_it(t_all *all, char *cmd, char **envp)
{
	char	**split_cmd;

	split_cmd = ft_split(cmd, ' ');
	all->cmd_path = check_path(all, split_cmd[0], envp);
	if (!all->cmd_path)
	{
		free_ptr(split_cmd);
		ft_printf("%s: command not found\n", split_cmd[0]);
		exit (-1);
	}
	if (execve(all->cmd_path, split_cmd, envp) == -1)
	{
		free_ptr(split_cmd);
		exit(-1);
	}
	free_ptr(split_cmd);
}

char	*div_cmd(char *str)
{
	int		i;
	char	*ret;

	i = 0;
	while (str[i] != ' ' && str[i] != '\0')
		i++;
	ret = ft_calloc(sizeof(char), i + 1);
	if (!str || !ret)
	{
		perror("Error, wrong alloc <div_cmd>\n");
		free(str);
		return (NULL);
	}
	i = -1;
	while (str[++i] != ' ' && str[i] != '\0')
		ret[i] = str[i];
	return (ret);
}
