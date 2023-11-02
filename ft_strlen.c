/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lprieri <lprieri@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 14:13:10 by lprieri       #+#    #+#                 */
/*   Updated: 2023/10/28 15:20:17 by lisandro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
* Function name: ft_strlen
* Description: calculates the length of the string pointed to by s,
*	excluding the terminating null byte ('\0').
* External functs.: none
* Return value: returns the number of bytes in the string pointed to by s.
* Parameters:
*	const char *s
*/

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
