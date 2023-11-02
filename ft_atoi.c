/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lprieri <lprieri@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 11:47:50 by lprieri       #+#    #+#                 */
/*   Updated: 2023/10/31 12:24:54 by lprieri       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
* Function name: ft_atoi
* Description: Converts the initial portion of the string
*	pointed to by nptr to int.
* External functs.: none
* Return value: int
* Parameters:
*	const char *nptr
*/

#include "libft.h"

int			ft_atoi(const char *nptr);
static int	ft_isspace(char c);

int	ft_atoi(const char *nptr)
{
	int			i;
	long long	nbr;
	int			is_negative;

	i = 0;
	nbr = 0;
	is_negative = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			is_negative = 1;
		i++;
	}
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		nbr = nbr * 10 + nptr[i] - '0';
		i++;
	}
	if (is_negative)
		return ((int) -nbr);
	return (nbr);
}

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

/*
* Test 1 - Min int
*/

// int	main(void)
// {
// 	char	str[] = "   \f-2147483648dgdfgf";
// 	size_t	len;

// 	len = -1;
// 	printf("%d\n", atoi(str));
// 	printf("%d\n", ft_atoi(str));
// }

/*
* Test 2 - Int overflow
*/

// int	main(void)
// {
// 	char	str[] = "   \f-214748581813648dgdfgf";
// 	size_t	len;

// 	len = -1;
// 	printf("%d\n", atoi(str));
// 	printf("%d\n", ft_atoi(str));
// }

/*
* Test 3 - Multiple minuses and pluses
*/

// int	main(void)
// {
// 	char	str[] = "   \f+-++--214743648dgdfgf";
// 	size_t	len;

// 	len = -1;
// 	printf("%d\n", atoi(str));
// 	printf("%d\n", ft_atoi(str));
// }
