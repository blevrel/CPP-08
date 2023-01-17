/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blevrel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 09:43:47 by blevrel           #+#    #+#             */
/*   Updated: 2023/01/16 10:44:28 by blevrel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once
#include <iostream>

template <typename T>
int	easyfind(T to_search, int to_find)
{
	int	i = 0;
	for (typename T::iterator iter = to_search.begin(); iter != to_search.end(); ++iter)
	{
		i++;
		if (*iter == to_find)
			return (i);
	}
	return (-1);
}
