/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvo <dvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:44:33 by dvo               #+#    #+#             */
/*   Updated: 2024/11/12 17:08:51 by dvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

#define TRY(expression) \
	try \
	{ \
		expression; \
		std::cerr << "\033[31mERROR: Didn't throw!\033[0m" << std::endl; \
	} \
	catch(const std::exception& e) \
	{ \
		std::cerr << e.what() << std::endl; \
	}

#define MAX_VAL 750

int off_test();

int main(int ac, char **av)
{
	(void)av;
	if (ac != 1)
		return off_test();
	Array<std::string> sstring;
	TRY(sstring[0] = "oui");
	Array<std::string> real_string(5);
	for (int i = 0; i < 5; i++)
		std::cout << real_string[i] << std::endl;
	real_string[0] = "oui";
	real_string[1] = "non";
	real_string[2] = "test";
	real_string[3] = "adsafga";
	real_string[4] = "qwfqa";
	TRY(real_string[5] = "qwd");
	for (int i = 0; i < 5; i++)
		std::cout << real_string[i] << std::endl;
	
}

int off_test()
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
   for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	TRY (numbers[-2] = 0);
	TRY(numbers[MAX_VAL] = 0);
	for (int i = 0; i < MAX_VAL; i++)
		numbers[i] = rand();
	std::cout << "Worked" << std::endl;
	delete [] mirror;
	return 0;
}