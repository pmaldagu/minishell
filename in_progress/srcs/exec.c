/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agossuin <agossuin@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/09 16:29:51 by agossuin          #+#    #+#             */
/*   Updated: 2020/06/15 11:06:55 by pmaldagu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void ft_exec(t_cmd *cmd)
{
	t_list	*args_cpy;
	int	pid;

	pid = fork();
	if (pid == 0);
	{
		execve(



