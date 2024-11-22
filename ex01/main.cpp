/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvo <dvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:27:55 by dvo               #+#    #+#             */
/*   Updated: 2024/11/12 20:03:56 by dvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void uppercase(char &c);
void multiply(int &c);

int main( void )
{
	std::string test = "oui 15 sasd qwdASDAS";
	int *nb = new int[4];
	nb[0] = 2;
	nb[1] = 6;
	nb[2] = 8;
	nb[3] = 10;
	iter(nb, 40, multiply);
	iter(test, 2, uppercase);
	std::cout << test << std::endl;
	std::cout << nb[0] << std::endl;
	std::cout << nb[1] << std::endl;
	std::cout << nb[2] << std::endl;
	std::cout << nb[3] << std::endl;

	return (0);
}

void	uppercase(char &c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
}

void	multiply(int &c)
{
	c = c * 2;
}