/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:28:54 by sohan             #+#    #+#             */
/*   Updated: 2021/03/30 23:09:16 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int test = 0;
void	initialize_combn(int *icomb, int count, int n);
void	display_combn(int *dcomb, int n);
void	cp_combn(int *tcomb, int *dcomb, int n);
int	cnt_combn(int *comb, int n);

void	initialize_from_orig(int *icomb, int count, int n)
{
	int j;

	j = 0;
	while (j <= count)
	{
		icomb[n - 1 - j] = icomb[n - 1 - j] + 1;
		j++;
	}
}

void	initialize_from_comb(int *icomb, int count, int n)
{
	int i;

	i = 1;
	icomb[n-count-1] = icomb[n - count -1] + 1;
	while (i <= count)
	{
		icomb[n - count - 1 + i] = icomb[n - count - 1] + i;
		i++;
	}
}

void	add_combn(int *acomb, int n)
{
	int ocomb[n];
	int count;

	cp_combn(ocomb , acomb, n);
	while (acomb[n - 1] != 9)	
	{
		acomb[n - 1] = acomb[n - 1] + 1;
		display_combn(acomb, n);
	}
	//printf("I'm Out!\n");
	count = cnt_combn(acomb, n);
	if (count == n - 1 || n == 1)
	{
		return ;
	}
	initialize_from_comb(acomb, count, n);
	display_combn(acomb, n);
}
void	display_combn(int *dcomb, int n)
{	
	int i;

	i = 0;
	//printf("%d ",test+1);	
	while (i < n)
	{
		printf("%d ",dcomb[i]);
		i++;
	}
	printf("\n");
	test++;
}

void	cp_combn(int *tcomb, int *dcomb, int n)
{
	int i;
	
	i = 0;
	while(i < n)
	{
		tcomb[i] = dcomb[i];
		i++;
	}
}

int	cnt_combn(int *comb, int n)
{	
	int index;
	int count;

	count = 0;
	index = 1;
	while (index <= n)
	{	
		if(comb[n-index] == 10 - index)
		{
			++count;
		}
		index++;
	}
	return (count);
}

void	ft_print_combn(int n)
{
	int comb[n];
	int orig[n];
	int count;
	int init;

	init = n;
	count = 0;
	while (n--)
	{
		comb[n] = n;
		orig[n] = comb[n];
	}
	n = init;
	display_combn(comb,n);
	while (comb[0] < 10 - n)
	{	
		add_combn(comb, n);
		count = cnt_combn(comb, n);
		if (count == n - 1)	
		{	
	 		initialize_from_orig(orig, count, n);
			cp_combn(comb, orig, n);
			display_combn(comb, n);
			count = 0;
		}
	}
	return ;
}
int	main(void)
{
	ft_print_combn(9);
	printf("number of combination:%d",test);
	return 0;
}
