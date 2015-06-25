/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla <robinlambertz+dev@gmail.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 13:43:25 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/25 13:46:22 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int		main()
{
	Array<int> arr(15);

	size_t	i = 0;
	while (i < arr.size())
	{
		std::cout << arr[i] << " ";
		i++;
	}
	return (0);
}
