/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rep.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 15:27:21 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/07/02 18:02:08 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string my_replace(std::string line, std::string to_be_searched, std::string to_be_placed)
{
    std::string new_line;
    size_t index = 0;

    while (1)
    {
        index = line.find(to_be_searched);
        if (index != std::string::npos)
        {
            new_line.append(line.substr(0, index));
            new_line.append(to_be_placed);
            line = line.substr(index + to_be_searched.size(), line.size() - (index + to_be_searched.size()));
        }
        else
        {
            new_line.append(line);
            break;
        }
    }
    return new_line;
}

int main(int argc, char **argv)
{
    std::string res = argv[1];
    res += ".replace";
    if (argc == 4)
    {
        std::fstream ifs(argv[1]);
        bool isEmpty = ifs.peek() == EOF;
        if (isEmpty)
        {
            std::cout << "Error: the file is empty\n";
            exit(1);
        }
        else if (ifs.is_open())
        {
            std::ofstream ofs(res);
            std::string line;
            while (!ifs.eof())
            {
                getline(ifs, line);
                std::string new_line = my_replace(line, argv[2], argv[3]);
                ofs << new_line << "\n";
            }
        }
        else
        {
            std::cout << "Error: the file doesn't exist.\n";
            exit(1);
        }
    }
    else
        std::cout << "You must enter 3 arguments.\n";
    return 0;
}