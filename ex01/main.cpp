/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:46:12 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/17 11:28:41 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"
#include <list>

std::list<int>	fill_list(std::list<int> l)
{
	for (int i = 0; i < 40000; i++)
		l.push_back(rand() % 2147483647);
	return (l);
}

int	main(void)
{
	srand(time(0));
	Span	test(50000);
	Span	test_empty;
	Span	test_empty_cpy;
	std::list<int> l;

	l = fill_list(l);
	test_empty_cpy = test_empty;

	try
	{
		test_empty_cpy.addNumber(42);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		test_empty.addNumber(42);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		test_empty.shortestSpan();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		for (int i = 0; i < 10000; i++)
			test.addNumber(rand() % 2147483647);
		std::cout << "Numbers were added one by one" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "Longest span: " << test.longestSpan() << std::endl;
		std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		test.addNumbers(l.begin(), l.end());
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "Numbers were added in one call" << std::endl;
	try
	{
		std::cout << "Longest span: " << test.longestSpan() << std::endl;
		std::cout << "Shortest span: " << test.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Span	test1(test);

	std::cout << "Printing longest and shortest span to test that the copy is correct" << std::endl;
	try
	{
		std::cout << "Longest span: " << test1.longestSpan() << std::endl;
		std::cout << "Shortest span: " << test1.shortestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		test1.addNumber(1);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
