/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:18:00 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 14:03:39 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include "colors.hpp"
#include <string>

class WrongAnimal
{

    public:
        //constructor
        WrongAnimal (void);
        //copy constructor
        WrongAnimal (const WrongAnimal &src);
        //overload operator =
        WrongAnimal& operator = (const WrongAnimal &src_rh);
        //destructor
        ~WrongAnimal (void);

        //member functions
        void makeSound(void) const;
        //get
        std::string getType(void) const;
    protected:
        std::string _type;
};

#endif