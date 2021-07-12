/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:57:34 by skorte            #+#    #+#             */
/*   Updated: 2021/04/25 09:43:28 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** The function "ft_print_matrix" takes a pointer to a matrix
** of the size 16 and writes it to the terminal,
** with spaces between the numbers,
** followed by a linebreak after every line of the matrix
*/

void	ft_print_matrix(int *matrix)
{
	int		i;
	char	nbr;
	int		*matr_ptr;

	matr_ptr = &matrix[0];
	i = 15;
	while (i > 0)
	{
		if (matr_ptr[i] > 4)
		{
			write(1, &"Error\n", 6);
			return ;
		}
		i--;
	}
	while (i < 16)
	{
		nbr = matr_ptr[i] + '0';
		write(1, &nbr, 1);
		if (i % 4 != 3)
			write(1, &" ", 1);
		else
			write(1, &"\n", 1);
		i++;
	}
}
