/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roblabla <robinlambertz+dev@gmail.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 13:13:42 by roblabla          #+#    #+#             */
/*   Updated: 2015/06/25 13:27:29 by roblabla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename A>
void	swap(A &a, A &b)
{
	A	tmp(a);

	a = b;
	b = tmp;
}

/*template<typename T>
T		&min(T &a, T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}*/

template<typename T>
T		min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

/*template<typename T>
T		&max(T &a, T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}*/

template<typename T>
T		max(T a, T b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int		main()
{
	{
		std::string	a("Hello World!");
		std::string	b("What a terrible night to have a curse");

		swap(a, b);
		std::cout << a << std::endl << b << std::endl;
		std::cout << min(12, 52) << std::endl << max(12, 52) << std::endl;
	}

	{
		int a = 2;
		int b = 3;

		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
		std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	}
	return (0);
}
