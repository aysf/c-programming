/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_constraints.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 19:28:19 by skorte            #+#    #+#             */
/*   Updated: 2021/04/25 13:21:08 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_test_constraints_XXXX
**	These 4 functions test if a matrix fulfills the edge restraints given in the
**	command line.  If a line or column is not yet completed by the recursive
**	algorithm, it will have a value > 4 at its end and will not be tested.
*/

int	ft_test_constraints_col_down(int *matrix, int *argi)
{
	int i;
	int j;
	int max[4];
	int val[4];

	i = 0;
	while (matrix[12 + i] <= 4 && i < 4)
	{
		val[i] = 0;
		max[i] = 0;
		j = 0;
		while (j < 4)
		{
			if (max[i] < matrix[4 * j + i])
			{
				max[i] = matrix[4 * j + i];
				val[i]++;
			}
			j++;
		}
		if (val[i] != argi[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_test_constraints_col_up(int *matrix, int *argi)
{
	int i;
	int j;
	int max[4];
	int val[4];

	i = 0;
	while (matrix[12 + i] <= 4 && i < 4)
	{
		val[i] = 0;
		max[i] = 0;
		j = 0;
		while (j < 4)
		{
			if (max[i] < matrix[4 * (3 - j) + i])
			{
				max[i] = matrix[4 * (3 - j) + i];
				val[i]++;
			}
			j++;
		}
		if (val[i] != argi[i + 4])
			return (1);
		i++;
	}
	return (0);
}

int	ft_test_constraints_line_left(int *matrix, int *argi)
{
	int	i;
	int	j;
	int	max[4];
	int	val[4];

	i = 0;
	while (matrix[4 * i + 3] <= 4 && i < 4)
	{
		val[i] = 0;
		max[i] = 0;
		j = 0;
		while (j < 4)
		{
			if (max[i] < matrix[4 * i + j])
			{
				max[i] = matrix[4 * i + j];
				val[i]++;
			}
			j++;
		}
		if (val[i] != argi[i + 8])
			return (1);
		i++;
	}
	return (0);
}

int	ft_test_constraints_line_right(int *matrix, int *argi)
{
	int i;
	int j;
	int max[4];
	int val[4];

	i = 0;
	while (matrix[4 * i + 3] <= 4 && i < 4)
	{
		val[i] = 0;
		max[i] = 0;
		j = 0;
		while (j < 4)
		{
			if (max[i] < matrix[4 * i + (3 - j)])
			{
				max[i] = matrix[4 * i + (3 - j)];
				val[i]++;
			}
			j++;
		}
		if (val[i] != argi[i + 12])
			return (1);
		i++;
	}
	return (0);
}
