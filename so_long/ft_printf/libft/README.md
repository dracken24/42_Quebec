echo = bool ft_echo(char *buffer);
	cd = bool ft_cd(char *buffer);
	pwd = bool ft_pwd(char *buffer);
	export = bool ft_export(char *buffer);
	unset = bool ft_unset(char *buffer);
	env = bool ft_env(void);
	$ = char *ft_get_variable(char *buffer);
	< = bool ft_redirect_input(char *buffer);
	> = bool ft_redirect_output(char *buffer);
	<< = bool ft_redirect_input_heredoc(char *buffer);
	>> = bool ft_redirect_output_append(char *buffer);