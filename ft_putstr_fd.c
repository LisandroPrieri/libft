/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lprieri <lprieri@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 09:48:50 by lprieri       #+#    #+#                 */
/*   Updated: 2023/10/31 17:08:50 by lprieri       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
* Function name: ft_putstr_fd
* Description: Outputs  the string ’s to the given file descriptor.
* External functs.: write
* Return value: void
* Parameters:
*	char *s: The string to output.
*	int fd: The file descriptor on which to write.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd);

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*
* Test 1
*/

// int	main(void)
// {
// 	int		fd;
// 	char	*str;

// 	fd = 2;
// 	str = "Lalala";
// 	ft_putstr_fd(str, fd);
// 	ft_putstr_fd("\n", fd);
// }
