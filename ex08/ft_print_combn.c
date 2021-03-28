/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:28:54 by sohan             #+#    #+#             */
/*   Updated: 2021/03/28 03:18:15 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_combn(int n)
{	
	char comb[n];
	int i;
	int init;
	
	init = n;
	if (comb[n-1] < comb[n-1-i] -1)
	{
		comb[n-2-i] = comb[n-2-i] + 1;
		comb[n-1-i] = comb[n-2-i] + 1;
	}
	
	return ;
}

void	main(void)
{
	ft_print_combn(3);
	return ;
}
