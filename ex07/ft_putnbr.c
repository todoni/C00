/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 15:59:47 by sohan             #+#    #+#             */
/*   Updated: 2021/03/27 18:42:57 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char nbr[10];
	int i;
	int nb_init;
	nb_init = nb;
	i = 0;

	if (nb_init < 0)
	{
		nb = nb * 2;
		nb = nb_init - nb;
		write(1, "-", 1);
	}
	if (nb_init == 0)
	{
		write(1, "0", 1);
	}
	while (i < 10)
	{
		nbr[i] = '0';
		i = i + 1;
	}
	i = 0;
	while (nb != 0)
	{
		nbr[i] = (nb % 10) + 48;
		nb = nb / 10;
		i = i + 1;
	}
	
	//if (nb_init < 0)
	//{
//		write(1, "-", 1);
//	}

	while (i >= 1)
	{
		write(1, &nbr[i-1], 1);
		i = i - 1;
	}

}

int main(void)
{
	ft_putnbr(1);
	return 0;
}
