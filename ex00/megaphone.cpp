/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 02:34:09 by soel-bou          #+#    #+#             */
/*   Updated: 2024/06/01 02:48:39 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int i, j;

    i = 1;
    j = 0;
    if(argc == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else if(argc == 2)
    {
        while(i < argc)
        {
            while(argv[i][j])
                cout << (char)toupper(argv[i][j++]);
            i++;
        }
        cout << endl;
    }
}