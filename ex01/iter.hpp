/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvo <dvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:15:53 by dvo               #+#    #+#             */
/*   Updated: 2024/11/12 19:37:50 by dvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename Function>

void iter(T& a, size_t length, Function func) {
    for (size_t i = 0; i < length; ++i) {
      func(a[i]);
    }
}
