/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 10:43:34 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/17 11:28:00 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Span.hpp"
#include <limits>
#include <algorithm>

Span::Span(void)
	:	_size(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int n)
	:	_size(n)
{
	std::cout << "Size constructor called" << std::endl;
}

Span::Span(const Span & other)
	:	_arr(other.getArr()),
		_size(other.getSize())
{
	std::cout << "Copy constructor called" << std::endl;
}

std::vector<int>	Span::getArr(void) const
{
	return (this->_arr);
}

unsigned int	Span::getSize(void) const
{
	return (this->_size);
}

void	Span::addNumber(int nb)
{
	if (this->_arr.size() < this->getSize())
		this->_arr.push_back(nb);
	else
		throw std::out_of_range("container is full");
}

int	Span::shortestSpan(void) const
{
	int					span;
	unsigned long int	i = 1;
	std::vector<int>	sorted_arr(this->_arr);
	
	std::sort(sorted_arr.begin(), sorted_arr.end());
	if (this->_arr.size() <= 1)
		throw std::exception();
	span = sorted_arr[1] - sorted_arr[0];
	while (i < this->_arr.size())
	{
		if (i + 1 != this->_arr.size() && sorted_arr[i + 1] - sorted_arr[i] < span)
			span = sorted_arr[i + 1] - sorted_arr[i];
		i++;
	}
	return (span);
}

int	Span::longestSpan(void) const
{
	int		span;
	std::vector<int>	sorted_arr(this->_arr);
	
	std::sort(sorted_arr.begin(), sorted_arr.end());
	if (this->_arr.size() <= 1)
		throw std::exception();
	span = sorted_arr[this->_arr.size() - 1] - sorted_arr[0];
	return (span);
}

Span::~Span(void)
{
	std::cout << "Destructor called" << std::endl;
}

Span & Span::operator=(const Span & other)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_size = other.getSize();
	this->_arr = other.getArr();
	return (*this);
}
