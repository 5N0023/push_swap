/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlektaib <mlektaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:22:13 by mlektaib          #+#    #+#             */
/*   Updated: 2023/01/10 19:36:28 by mlektaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int a, char **arg)
{
	t_list	*stack;
	t_list	*tmp;
	t_list	*b;
	int		size;

	if (a == 1)
		return (0);
	b = NULL;
	if (!ft_createstack(arg, &stack))
	{
		ft_putendl_fd("Error", 1);
		ft_lstclear(&stack, free);
		exit (1);
	}
	size = ft_lstsize(stack);
	if (size > 10)
		ft_longsort(&stack, &b, size);
	else
		ft_shortsort(&stack, &b, size);
	ft_lstclear(&stack, free);
	return (0);
}	
