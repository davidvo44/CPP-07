/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvo <dvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:57:51 by dvo               #+#    #+#             */
/*   Updated: 2024/11/02 20:17:32 by dvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _nb(1)
{
	_array = new T*;
	_array[0] = 0;
	_nb = 1;

}

template <typename T>
Array<T>::Array(unsigned n) : _nb(n)
{
	_array = new T[n];
	for (unsigned i = 0; i < n; i++)
		_array[i] = 0;
}

template <typename T>
Array<T>::Array(Array const &src)
{
	_nb = src.GetNb();
	_array = new T[src.GetNb()];
	for (unsigned i = 0; i < _nb; i++)
	{
		_array[i] = src.GetArray(i);
	}
}

template <typename T>
Array<T>& Array<T>::operator=(Array const & src)
{
	this->_nb = src->GetNB();
	_array = new T[src->GetNB()];
	for (unsigned i = 0; src.GetArray[i]; i++)
	{
		_array[i] = src->GetArray(i);
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
T Array<T>::GetArray(unsigned n) const
{
	if (n >= _nb)
		throw OutOfRange();
	return (_array[n]);
}

template <typename T>
void	Array<T>::SetArray(unsigned n, const T content)
{
	if (n >= _nb)
		throw OutOfRange();
	_array[n] = content;
}

template <typename T>
unsigned Array<T>::GetNb() const
{
	return (_nb);
}

template <typename T>
unsigned Array<T>::size() const
{
	return (_nb);
}

template <typename T>
const char* Array<T>::OutOfRange::what() const throw()
{
	return "Array::OutOfRange";
}

template <typename T>
T& Array<T>::operator[](unsigned index)
{
	if (index < 0 || index >= _nb)
		throw OutOfRange();
    return _array[index];
}