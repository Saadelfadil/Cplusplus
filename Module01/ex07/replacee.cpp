/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 13:15:15 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/06/19 17:11:03 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        // ifstream
        std::fstream ifs(argv[1]);
        ifs >> argv[2] >> argv[3];
        std::cout << "the file name is : "<< argv[1] << "\n";
        std::cout << argv[2] << " " << argv[3] << "\n";
        ifs.close();
        
        // ofstream
        // std::ofstream ofs("test.out");
        // ofs << "I love wydad athletic club\n";
        // ofs.close();
    }
    else
        std::cout << "You must enter 3 arguments.\n";
    return 0;
}