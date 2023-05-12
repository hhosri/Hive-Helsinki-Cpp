/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:27:20 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 13:45:05 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

//constructor
Cat::Cat(void)
{
    std::cout<<BLUE<<"Cat is Constructed"<<RESET<<std::endl;
    this->_type = "Cat";
}

//copy constructor
Cat::Cat(const Cat &src)
{
    std::cout<<"Cat copy constructor"<<std::endl;
    *this = src;
    return;
}

//overload operator =
Cat& Cat::operator=(const Cat &src_rh)
{
    std::cout<<"Cat overload operator="<<std::endl;
    if (this != &src_rh)
    {
        this->_type = src_rh._type;
    }
    return (*this);
}

//destructor
Cat::~Cat(void)
{
    std::cout<<BLUE<<"Cat is Deconstructed"<<RESET<<std::endl;
    return;
}

//member functions
void Cat::makeSound(void) const
{
    std::cout<<RED<<"Miaaww"<<RESET<<std::endl;
    return;
}