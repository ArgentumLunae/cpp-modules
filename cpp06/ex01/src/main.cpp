/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: argentumlunae <argentumlunae@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 21:28:18 by argentumlun   #+#    #+#                 */
/*   Updated: 2023/02/07 21:44:00 by argentumlun   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	char	c;
	int		i;
	// float	f;
	// double	d;
};

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		data;
	Data		*data2;
	uintptr_t	raw;

	data.c = '!';
	data.i = 33;
	// data.f = 33.33;
	// data.d = 33.3333;

	std::cout << "Data: c=" << data.c << ", i=" << data.i /*<< ", f=" << data.f << ", d=" << data.d*/ << std::endl;
	raw = serialize(&data);
	std::cout << "Raw: " << raw << std::endl;
	data2 = deserialize(raw);
	std::cout << "Data: c=" << data2->c << ", i=" << data2->i /*<< ", f=" << data2->f << ", d=" << data2->d*/ << std::endl;
	return (0);
}