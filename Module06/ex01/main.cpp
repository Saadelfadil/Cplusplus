/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-fadi <sel-fadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:55:38 by sel-fadi          #+#    #+#             */
/*   Updated: 2021/09/29 08:54:27 by sel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct Data
{
    std::string name;
    int age;
    char gender;
	bool active;
} t_data;

uintptr_t serialize(t_data* data)
{
    return (reinterpret_cast<uintptr_t>(data));
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<t_data *>(raw);
}

int main()
{
	t_data *data = new t_data;
	t_data *data2 = NULL;
	uintptr_t u;

	data->name = "saad";
    data->age = 22;
    data->gender = 'M';
    data->active = true;
	
	u = serialize(data);
	
	data2 = deserialize(u);
	
	std::cout << data2->name << std::endl;
	std::cout << data2->age << std::endl;
	std::cout << data2->gender << std::endl;
	std::cout << data2->active << std::endl;
}