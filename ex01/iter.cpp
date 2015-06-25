/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla <robinlambertz+dev@gmail.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 13:27:53 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/25 13:33:22 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename L, typename F>
void	iter(T *array, L len, F fun)
{
	L i = 0;
	while (i < len)
		fun(array[i++]);
}

void	print_int(int i)
{
	std::cout << i << " ";
}

int	main()
{
	int		test[25];
	int		i = 0;
	while (i < 25)
	{
		test[i] = i;
		i++;
	}
	iter(test, 25, print_int);
	return (0);
}
