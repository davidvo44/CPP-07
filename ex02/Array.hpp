/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvo <dvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:24:52 by dvo               #+#    #+#             */
/*   Updated: 2024/11/12 19:44:53 by dvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <typeinfo>

template <typename T>
class Array
{
public:
		//Constructor
	Array();
	Array(unsigned n);
	Array(Array const &src);
	~Array();
		//Operator
	Array& operator=(Array const & src);
	T& operator[](unsigned index);
	const T& operator[](unsigned index) const;
		//Get-Set
	T			GetArray(unsigned n) const;
	unsigned	GetNb() const;
	void		SetArray(unsigned n, const T content);
	unsigned	size() const;
		//Exception Class
	class OutOfRange : public std::exception{
	public:
		virtual const char* what() const throw();
	};
private:
	T *_array;
	unsigned _nb;
};

#include "Array.tpp"
#endif