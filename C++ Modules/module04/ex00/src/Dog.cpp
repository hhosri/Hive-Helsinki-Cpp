/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:52:37 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 13:45:39 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../includes/Dog.hpp"

//constructor
Dog::Dog(void)
{
    std::cout<<BLUE<<"Dog is Constructed"<<RESET<<std::endl;
    this->_type = "Dog";
}

//copy constructor
Dog::Dog(const Dog &src)
{
    std::cout<<"Dog copy constructor"<<std::endl;
    *this = src;
    return;
}

//overload operator =
Dog& Dog::operator=(const Dog &src_rh)
{
    std::cout<<"Dog overload operator="<<std::endl;
    if (this != &src_rh)
    {
        this->_type = src_rh._type;
    }
    return (*this);
}

//destructor
Dog::~Dog(void)
{
    std::cout<<BLUE<<"Dog is Deconstructed"<<RESET<<std::endl;
    return;
}

//member functions
void Dog::makeSound(void) const
{
    std::cout<<RED<<"Woof Woof"<<RESET<<std::endl;
    return;
}