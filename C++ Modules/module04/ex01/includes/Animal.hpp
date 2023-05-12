/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:18:00 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 13:51:33 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "colors.hpp"
#include <string>

class Animal
{

    public:
        //constructor
        Animal (void);
        //copy constructor
        Animal (const Animal &src);
        //overload operator =
        Animal& operator = (const Animal &src_rh);
        //destructor
       virtual  ~Animal (void);

        //member functions
        virtual void makeSound(void) const;
        //get
        std::string getType(void) const;
    protected:
        std::string _type;
};

#endif