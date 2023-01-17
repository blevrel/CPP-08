/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:04:56 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/16 10:49:23 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "easyfind.hpp"
#include <list>
#include <vector>
#include <deque>

int	main(void)
{
	{
		std::list<int>	to_search;
		int				to_find = 42;
		int				test = 0;
	
		to_search.push_back(1);
		to_search.push_back(2);
		to_search.push_back(3);
		to_search.push_back(4);
		to_search.push_back(42);
	
		test = easyfind(to_search, to_find);
		if (test == -1)
			std::cerr << to_find << " could not be found in container" << std::endl;
		else
			std::cout << to_find << " found in list container at index "<< test << std::endl;
	}
	{
		std::vector<int>	to_search;
		int					to_find = 5;
		int					test = 0;
	
		to_search.push_back(1);
		to_search.push_back(2);
		to_search.push_back(3);
		to_search.push_back(4);
		to_search.push_back(42);
	
		test = easyfind(to_search, to_find);
		if (test == -1)
			std::cerr << to_find << " could not be found in container" << std::endl;
		else
			std::cout << to_find << " found in vector container at index "<< test << std::endl;
	}
	{
		std::deque<int>	to_search;
		int				to_find = 42;
		int				test = 0;
	
		to_search.push_back(1);
		to_search.push_back(2);
		to_search.push_back(3);
		to_search.push_back(4);
		to_search.push_back(42);
	
		test = easyfind(to_search, to_find);
		if (test == -1)
			std::cerr << to_find << " could not be found in container" << std::endl;
		else
			std::cout << to_find << " found in deque container at index "<< test << std::endl;
	}
	return (0);
}
