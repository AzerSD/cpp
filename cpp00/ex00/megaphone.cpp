/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asioud <asioud@42heilbronn.de>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 06:45:36 by azer              #+#    #+#             */
/*   Updated: 2023/05/07 01:39:10 by asioud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
	}
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			std::string input(argv[i]); // convert char* to string
			for (size_t j = 0; j < input.size(); j++)
			{
				input[j] = std::toupper(input[j]);
			}
				
			std::cout << input;
		}
		std::cout << std::endl;
	}
	return 0;
}

