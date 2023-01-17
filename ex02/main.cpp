/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 09:41:22 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/17 11:24:13 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "MutantStack.hpp"
#include <list>

int main(void)
{
	{
		MutantStack<int> mstack;
	
		mstack.push(5);
		mstack.push(17);
		MutantStack<int> mstack_cpy = mstack;
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		MutantStack<int>::iterator it_cpy = mstack_cpy.begin();
		MutantStack<int>::iterator ite_cpy = mstack_cpy.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		while (it_cpy != ite_cpy)
		{
			std::cout << *it_cpy << std::endl;
			++it_cpy;
		}

	}
	{
		std::list<int> test_list;
	
		test_list.push_back(5);
		test_list.push_back(17);
		std::list<int> test_list_cpy = test_list;
		std::cout << test_list.back() << std::endl;
		test_list.pop_back();
		std::cout << test_list.size() << std::endl;
		test_list.push_back(3);
		test_list.push_back(5);
		test_list.push_back(737);
		test_list.push_back(0);
		std::list<int>::iterator it = test_list.begin();
		std::list<int>::iterator it_cpy = test_list_cpy.begin();
		std::list<int>::iterator ite = test_list.end();
		std::list<int>::iterator ite_cpy = test_list_cpy.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		while (it_cpy != ite_cpy)
		{
			std::cout << *it_cpy << std::endl;
			++it_cpy;
		}

	}
	{
		MutantStack<std::string> mstack;
	
		mstack.push("test");
		mstack.push("test2");
		MutantStack<std::string> mstack_cpy = mstack;
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push("test3");
		mstack.push("test4");
		mstack.push("test5");
		mstack.push("test6");
		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator it_cpy = mstack_cpy.begin();
		MutantStack<std::string>::iterator ite = mstack.end();
		MutantStack<std::string>::iterator ite_cpy = mstack_cpy.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		while (it_cpy != ite_cpy)
		{
			std::cout << *it_cpy << std::endl;
			++it_cpy;
		}
	}
	return (0);
}
