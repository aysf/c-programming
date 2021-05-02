/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 16:59:09 by skorte            #+#    #+#             */
/*   Updated: 2021/04/25 13:21:56 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_test_matrix
**	This function tests if in the matrix all lines and columns
**	are filled with non-repeating numbers.
**	Since the matrix has been initialized with running numbers > 4
**	this is always true for points that have not yet been covered
**	by the recursive algorythm.
*/

int	ft_test_matrix(int *matrix)
{
	int i;

	i = 0;
	while (i <= 3)
	{
		if (matrix[i] == matrix[i + 4] ||
			matrix[i] == matrix[i + 8] ||
			matrix[i] == matrix[i + 12] ||
			matrix[i + 4] == matrix[i + 8] ||
			matrix[i + 4] == matrix[i + 12] ||
			matrix[i + 8] == matrix[i + 12] ||
			matrix[4 * i] == matrix[4 * i + 1] ||
			matrix[4 * i] == matrix[4 * i + 2] ||
			matrix[4 * i] == matrix[4 * i + 3] ||
			matrix[4 * i + 1] == matrix[4 * i + 2] ||
			matrix[4 * i + 1] == matrix[4 * i + 3] ||
			matrix[4 * i + 2] == matrix[4 * i + 3])
			return (1);
		i++;
	}
	return (0);
}
