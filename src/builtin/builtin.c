/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:02:47 by joao-alm          #+#    #+#             */
/*   Updated: 2025/04/04 15:02:50 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"
#include "jal_string.h"
#include "util.h"

int ft_is_builtin(const char *cmd)
{
	return (!ft_strcmp(cmd, "echo") || !ft_strcmp(cmd, "cd")
		|| !ft_strcmp(cmd, "pwd") || !ft_strcmp(cmd, "export")
		|| !ft_strcmp(cmd, "unset") || !ft_strcmp(cmd, "env")
		|| !ft_strcmp(cmd, "exit"));
}

int	ft_exec_builtin(t_prog *prog, const t_command *command)
{
	if (!ft_strcmp(command->cmd, "echo"))
		ft_exec_echo(command);
	if (!ft_strcmp(command->cmd, "cd"))
		ft_exec_cd(prog, command);
	if (!ft_strcmp(command->cmd, "pwd"))
		ft_exec_pwd(prog, command);
	return (ERROR);
}
