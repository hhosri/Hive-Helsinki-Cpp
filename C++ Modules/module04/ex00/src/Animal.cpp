/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:18:37 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 13:44:54 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

//constructor
Animal::Animal(void)
{
    std::cout<<BLUE<<"Animal is Constructed"<<RESET<<std::endl;
    this->_type = "Animal";
}

//copy constructor
Animal::Animal(const Animal &src)
{
    std::cout<<"Animal copy constructor"<<std::endl;
    *this = src;
    return;
}

//overload operator =
Animal& Animal::operator=(const Animal &src_rh)
{
    std::cout<<"Animal overload operator="<<std::endl;
    if (this != &src_rh)
    {
        this->_type = src_rh._type;
    }
    return (*this);
}

//destructor
Animal::~Animal(void)
{
    std::cout<<BLUE<<"Animal is Deconstructed"<<RESET<<std::endl;
    return;
}

//member functions
void Animal::makeSound(void) const
{
    std::cout<<RED<<"Animals can make all sorts of sounds!"<<RESET<<std::endl;
    return;
}

//get
std::string Animal::getType(void) const
{
    return (this->_type);
}