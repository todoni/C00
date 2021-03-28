/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 12:33:05 by sohan             #+#    #+#             */
/*   Updated: 2021/03/27 15:53:12 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char dgit1[2];
	char dgit2[2];

	dgit1[0] = '0';
	dgit1[1] = '0';
	dgit2[0] = '0';
	dgit2[1] = '1';

	while (dgit1[0] <='9')
	{
		while (dgit1[1] <= '9')
		{
			while (dgit2[0] <= '9')
			{
				while (dgit2[1] <= '9')
				{
					write(1, dgit1, 2);
					write(1, " ", 1);
					write(1, dgit2, 2);
					write(1, ", ", 2);
					dgit2[1] = dgit2[1] + 1; //for loop
				}
				dgit2[0] = dgit2[0] + 1; //for loop
				dgit2[1] = dgit1[1];	
			}
			dgit2[0] = dgit1[0];
			dgit1[1] = dgit1[1] + 1; //for loop
			dgit2[1] = dgit1[1] + 1;
		}
		dgit1[0] = dgit1[0] + 1; //for loop
		dgit2[0] = dgit1[0];
		dgit1[1] = '0';
		dgit2[1] = dgit1[1] + 1;
	
	}

}

void main(void)
{
	ft_print_comb2();
	return ;
}

