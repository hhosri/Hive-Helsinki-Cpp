/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:21:37 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 16:11:51 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

//constructor
Brain::Brain(void)
{
    std::cout<<BLUE<<"Brain is constructed"<<RESET<<std::endl;
    return;
}

//copy constructor
Brain::Brain(const Brain &src)
{
    std::cout<<BLUE<<"Brain copy constructor"<<RESET<<std::endl;
    *this = src;
    return;
}

//operator overload =
Brain &Brain::operator=(const Brain &src_rh)
{
    std::cout<<BLUE<<"Brain overload operator"<<RESET<<std::endl;
    if (this != &src_rh)
    {
        for (int i = 0; i < 100; i++)
        {
            this->_ideas[i]=src_rh._ideas[i];
        }
    }
    return (*this);
}

//deconstructor
Brain::~Brain(void)
{
    std::cout<<BLUE<<"Brain is deconstructed"<<std::endl;
    return;
}

//set-get
void Brain::setIdea(std::string idea, int index)
{
    this->_ideas[index] = idea;
    return;
}

std::string Brain::getIdea(int index)
{
    return(this->_ideas[index]);
}