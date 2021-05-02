/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 16:20:19 by skorte            #+#    #+#             */
/*   Updated: 2021/04/25 13:21:46 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_test_matrix(int *matrix);
int	ft_test_constraints_col_up(int *matrix, int *argi);
int	ft_test_constraints_col_down(int *matrix, int *argi);
int	ft_test_constraints_line_left(int *matrix, int *argi);
int	ft_test_constraints_line_right(int *matrix, int *argi);

/*
** ft_recursive
**	Fills the matrix point by point.
**	Starts with trying to place 1, tests if all valid.
**		If valid, it calls itself for the next point.
**		If not valid, it increments its point value by 1.
**		If even 4 is not valid, the function resets the
**		value to (position + 5) and exits with return (1).
**		This causes the function that called this instance
**		to increment its point value by one -> Backtracing
**	If all contraints are met for the last point,
**	the function exits. The matrix is solved.
**	If no solution is found, the function exits, too.
**	The original values <= 5 are written in the matrix.
*/

int	ft_recursive(int *matrix, int position, int *argi)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		matrix[position] = i;
		if (ft_test_matrix(matrix) == 0 &&
			ft_test_constraints_col_up(matrix, argi) == 0 &&
			ft_test_constraints_col_down(matrix, argi) == 0 &&
			ft_test_constraints_line_left(matrix, argi) == 0 &&
			ft_test_constraints_line_right(matrix, argi) == 0)
		{
			if (position < 15)
			{
				if (ft_recursive(matrix, position + 1, argi) == 0)
					return (0);
			}
			else
				return (0);
		}
		matrix[position] = position + 4;
		i++;
	}
	return (1);
}
