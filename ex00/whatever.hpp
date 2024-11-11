/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvo <dvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:21:37 by dvo               #+#    #+#             */
/*   Updated: 2024/11/11 18:19:28 by dvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T& a,T& b)
{
	T c = b;
	b = a;
	a = c;
}

template <typename T>
T min(const T& a,const T& b)
{
	if (a > b)
		return b;
	return a;
}

template <typename T>
T max(const T& a,const T& b)
{
	if (a < b)
		return b;
	return a;
}