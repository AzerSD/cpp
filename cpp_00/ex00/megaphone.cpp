/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azer <sioudazer8@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 06:45:36 by azer              #+#    #+#             */
/*   Updated: 2022/12/23 20:11:36 by azer             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <ctype.h>

using namespace std;

int main(int argc, char **argv)
{
	if (argc < 2)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	else
	{
		vector<string> arguments (argv, argv+argc); // arguments range from argv[0] to argv[argc]
		for (int i = 1; i < argc; i++)
			for (int j = 0; arguments[i][j]; j++)
				cout << (char) toupper(arguments[i][j]);

		cout << endl;
	}

	return 1;
}
