/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:11:45 by emukamada         #+#    #+#             */
/*   Updated: 2023/11/19 13:13:39 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*line;
	int		lines;

	lines = 0;
	fd = open("text", O_RDONLY);
	while ((line = get_next_line(fd)))
		printf("line[%d]-> [%s]\n", lines++, line);
	return (0);
}
