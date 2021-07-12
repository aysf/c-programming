/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorte <skorte@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:57:33 by skorte            #+#    #+#             */
/*   Updated: 2021/04/25 13:22:42 by skorte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_test_input(int argc, char *argp);
int		ft_recursive(int *matrix, int position, int *argi);
int		ft_test_matrix(int *matrix);
int		ft_test_constraints(int *matrix, int *argi);
void	ft_print_matrix(int *matrix);

/*
** Functions:
**
** ft_test_input:
**	Looks if only one string is given as argument.
**	Checks if argument string is correctly formatted.
**	Returns 0 if true and 1 otherwise.
**
** ft_recursive:
**  Tries a number 1 - 4 at position in the matrix.
**	Calls itself for the next position if tests return 0.
**  Goes back one step if no solution found. -> Backtracing.
**  At the last position it stops calling itself, but ends if tests pass.
**
** ft_test_matrix:
**	Tests vertical colums, whether 4 different digits are in there.
**	Returns 0 if true and 1 otherwise.
**
** ft_test_constraints_XXXX
**	Tests if outer restraints are met for all completed columns and rows.
**	Returns 0 if true and 1 otherwise.
**
** ft_print_matrix
**	writes the matrix to stdout.
**
** Constraint parameters:
** col1up col2up col3up col4up col1down col2down col3down col4down
** row1left row2left row3left row4left row1right row2right row3right row4right
*/

/*
** main function
** 	Reads the input parameter.
** 	Tests them for validity with ft_test_input.
** 	Converts the input string to array of integers.
** 	Initializes matrix array with numbers from 5 ascending to 20.
** 	Calls the ft_recursive to generate the correct matrix using backtracing.
** 	Calls ft_print_matrix to display matrix or error message if not solvable.
*/

int		main(int argc, char **argv)
{
	int		argi[16];
	int		matrix[16];
	int		i;
	char	*argp;

	argp = argv[1];
	if (ft_test_input(argc, argp) != 0)
		return (1);
	i = 0;
	while (i < 16)
	{
		argi[i] = *argp - '0';
		i++;
		argp += 2;
	}
	i = 0;
	while (i < 16)
	{
		matrix[i] = i + 5;
		i++;
	}
	ft_recursive(matrix, 0, argi);
	ft_print_matrix(matrix);
	return (0);
}

int		ft_test_input(int argc, char *argp)
{
	int i;
	int tests;

	tests = 0;
	if (argc != 2)
		tests = 1;
	i = 0;
	while (i < 16 && tests == 0)
	{
		if (argp[0] < '1' || argp[0] > '4')
			tests = 1;
		argp++;
		if ((i != 15 && argp[0] != ' ') ||
			(i == 15 && argp[0] != '\0'))
			tests = 1;
		argp++;
		i++;
	}
	if (tests == 1)
	{
		write(1, &"Wrong input!\n", 13);
		return (1);
	}
	return (0);
}
