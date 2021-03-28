/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:46:49 by sohan             #+#    #+#             */
/*   Updated: 2021/03/28 02:42:17 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char dgit[3];
	int dgit2_cnt;
	int dgit3_cnt;
	
	dgit[0] = '0';
	dgit[1] = '1';
	dgit[2] = '2';
	dgit2_cnt = '0';
	dgit3_cnt = '0';
	
	while (dgit[0] <= '7')
	{
		while (dgit[1] <= '8')
		{
			while (dgit[2] <= '9')
			{
				write(1, dgit, 3);
				
				if (dgit[0] != 7 || dgit[1] != 8 || dgit[2] != 9)
				{
				write(1, ", ", 2);
				}
				dgit[2] = dgit[2] + 1;
				dgit3_cnt = dgit3_cnt + 1;	
			}	
			dgit[2] = dgit[2] - (dgit3_cnt-48) + 1;
			dgit3_cnt = '0';
			dgit[1] = dgit[1] + 1;
			dgit2_cnt = dgit2_cnt + 1;
		}
		dgit[2] = dgit[2] - (dgit2_cnt-48) + 1;
		dgit[1] = dgit[1] - (dgit2_cnt-48) + 1;
		dgit2_cnt = '0';
		dgit[0] = dgit[0] + 1;
	}
}

int main(void)
{
	ft_print_comb();
	return 0;
}
