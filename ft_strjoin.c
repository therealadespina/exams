/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:24:23 by adespina          #+#    #+#             */
/*   Updated: 2020/02/07 15:18:45 by adespina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strjoin(char *s1, char *s2)
{
	int i = 0;
	char *array;

	array = (char*)malloc(sizeof(array) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (*s1 != '\0')
		array[i++] = *s1++;
	while (*s2 != '\0')
		array[i++] = *s2++;
	array[i] = '\0';
	return (array);
}

int main(int ac, char **av)
{
	char *res;
	res = ft_strjoin(av[1], av[2]);
	printf("%s", res);
	return(0);
}
