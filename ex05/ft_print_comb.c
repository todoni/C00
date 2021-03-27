/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 00:46:49 by sohan             #+#    #+#             */
/*   Updated: 2021/03/27 04:42:53 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char dgit1;
	char dgit2;
	char dgit3;
	char dgit2_cnt;
	char dgit3_cnt;
	
	dgit1 = '0';
	dgit2 = '1';
	dgit3 = '2';
	dgit2_cnt = '0';
	dgit3_cnt = '0';
	
	//cnt_dgit2 = '0';
	//cnt_dgit3 = '0'
	while (dgit1 <= '7')
	{
		while (dgit2 <= '8')
		{
			while (dgit3 <= '9')
			{
				write(1, &dgit1, 1);
				write(1, &dgit2, 1);
				write(1, &dgit3, 1);
				//if (dgit1 != '7' && dgit2 != '8' && dgit3 != '9')
				//{//
				write(1, ", ", 2);
				//}
				dgit3 = dgit3 + '1';
				dgit3_cnt = dgit3_cnt + '1';	
			}		
			dgit3 = dgit3 - dgit3_cnt + '1';
			dgit3_cnt = '0';
			dgit2 = dgit2 + '1';
			dgit2_cnt = dgit2_cnt + '1';
		}
		dgit3 = dgit3 - dgit2_cnt + '1';
		dgit2 = dgit2 - dgit2_cnt + '1';
		dgit2_cnt = '0';
		dgit1 = dgit1 + '1';
	}
}

int main(void)
{
	ft_print_comb();
	return 0;
}
