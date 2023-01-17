/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 10:03:43 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/17 11:26:20 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <list>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>
{

public:

	MutantStack(void);
	MutantStack(const MutantStack & other);
	MutantStack &	operator=(const MutantStack & other);
	~MutantStack(void);
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin()
	{
		return (this->c.begin());
	}

	iterator	end()
	{
		return (this->c.end());
	}
	
};

template <typename T>
MutantStack<T>::MutantStack(void)
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack & other)
	:	std::stack<T>(other)
{
	this->c = other.c;
}

template <typename T>
MutantStack<T> &	MutantStack<T>::operator=(const MutantStack & other)
{
	this->c = other.c;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
	
}

#endif
