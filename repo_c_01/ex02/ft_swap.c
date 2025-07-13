/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhanlon <dhanlon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:06:44 by dhanlon           #+#    #+#             */
/*   Updated: 2025/07/13 15:51:51 by dhanlon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int a = 42;
	int b = 24;
	
	ft_swap(&a, &b);
	printf("a: %d, b: %d\n", a, b);
	return (0);
}*/
