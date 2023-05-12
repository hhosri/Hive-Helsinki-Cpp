/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:26:56 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 15:51:30 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal
{

    public:
        //constructor
        Dog (void);
        //copy constructor
        Dog (const Dog &src);
        //overload operator =
        Dog& operator = (const Dog &src_rh);
        //deconstructor
        ~Dog (void);

        //member functions
        void makeSound(void) const;

    private:
        Brain   *_brain;
};


#endif