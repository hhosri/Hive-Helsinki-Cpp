/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:56:07 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 14:02:51 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

//constructor
WrongCat::WrongCat(void)
{
    std::cout<<BLUE<<"WrongCat is Constructed"<<RESET<<std::endl;
    this->_type = "WrongCat";
}

//copy constructor
WrongCat::WrongCat(const WrongCat &src)
{
    std::cout<<"WrongCat copy constructor"<<std::endl;
    *this = src;
    return;
}

//overload operator =
WrongCat& WrongCat::operator=(const WrongCat &src_rh)
{
    std::cout<<"WrongCat overload operator="<<std::endl;
    if (this != &src_rh)
    {
        this->_type = src_rh._type;
    }
    return (*this);
}

//destructor
WrongCat::~WrongCat(void)
{
    std::cout<<BLUE<<"WrongCat is Deconstructed"<<RESET<<std::endl;
    return;
}

//member functions
void WrongCat::makeSound(void) const
{
    std::cout<<RED<<"Miaaww"<<RESET<<std::endl;
    return;
}