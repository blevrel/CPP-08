/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:41:55 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/17 11:27:00 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>
#include <cstdlib>

class Span
{

public:

	Span(void);
	Span(unsigned int n);
	Span(const Span & other);
	unsigned int		getSize(void) const;
	std::vector<int>	getArr(void) const;
	void				addNumber(int nb);
	template <typename T>
	void				addNumbers(T iter_beg, T iter_end);
	int					shortestSpan(void) const;
	int					longestSpan(void) const;
	~Span(void);
	Span & operator=(const Span & other);

private:

	std::vector<int>	_arr;
	unsigned int	_size;

};

template <typename T>
void	Span::addNumbers(T iter_beg, T iter_end)
{
	T				iter_beg_cpy = iter_beg;
	unsigned int	i = 0;

	for (; iter_beg_cpy != iter_end; iter_beg_cpy++)
	{
		i++;
		if (i > this->_size - this->_arr.size())
			throw std::out_of_range("Range is too large to fit in span");
	}
	this->_arr.insert(this->_arr.end(), iter_beg, iter_end);
}
