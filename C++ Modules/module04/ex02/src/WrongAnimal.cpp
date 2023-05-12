/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:18:37 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 14:01:46 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

//constructor
WrongAnimal::WrongAnimal(void)
{
    std::cout<<BLUE<<"WrongAnimal is Constructed"<<RESET<<std::endl;
    this->_type = "WrongAnimal";
}

//copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    std::cout<<"WrongAnimal copy constructor"<<std::endl;
    *this = src;
    return;
}

//overload operator =
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src_rh)
{
    std::cout<<"WrongAnimal overload operator="<<std::endl;
    if (this != &src_rh)
    {
        this->_type = src_rh._type;
    }
    return (*this);
}

//destructor
WrongAnimal::~WrongAnimal(void)
{
    std::cout<<BLUE<<"WrongAnimal is Deconstructed"<<RESET<<std::endl;
    return;
}

//member functions
void WrongAnimal::makeSound(void) const
{
    std::cout<<RED<<"WrongAnimals can make all sorts of sounds!"<<RESET<<std::endl;
    return;
}

//get
std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}