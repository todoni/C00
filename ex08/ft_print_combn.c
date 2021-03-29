/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 19:28:54 by sohan             #+#    #+#             */
/*   Updated: 2021/03/30 06:01:23 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	display_combn(char comb[], int n)
{
	int end;
	end = 9;
	
	while (comb[n-1] <= end + 48)
	{
		write(1, comb, n);
		printf(" ");
		comb[n-1] = comb[n-1] + 1;
	}
	return ;
}

//void	make_ascending(char comb[], int n, int i)
//{
//		display_combn(comb, n, i);
//}
void	ft_print_combn(int n)
{	
	char comb[n];
	int i;
	int j;
	int k;
	int init;

	init = n;
	i = 0;
	j = n - 1;
	k= 1;
	while (n--)
	{
		comb[n] = n + 48; //initialize
	}
	n = init;
	while (i<100)
	{
		display_combn(comb,init);
		//write(1, comb, n);
		while (comb[n-1] != 48)
		{
			comb[n-1] = comb[n-1] + 1;
			n--;
		}
		n = init;
		i++;
	} 
	
	//while (comb[0] <= 10 - n + 48)
	//{
	//	display_combn(comb , comb[i - 1], end, n);
	//	comb[i - 2] = comb [i - 2] + 1;
	//	comb[i - 1] = comb[i - 1] + 1;
	//	i--;
	//	end--;
		//printf("Is running\n");
	//	write(1, comb, n);
	//	printf("\n");
		//init--;
	//}
	//for (int i=0;i<init;i++)
	//{
	//	printf("%d ",comb[i]);
	//}
	//printf("\n");

	return ;

}
int	main(void)
{
	ft_print_combn(3);
	return 0;
}
