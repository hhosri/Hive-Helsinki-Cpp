/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:26:38 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 13:54:54 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{

    public:
        //constructor
        WrongCat (void);
        //copy constructor
        WrongCat (const WrongCat &src);
        //overload operator =
        WrongCat& operator = (const WrongCat &src_rh);
        //deconstructor
        ~WrongCat (void);

        //member functions
        void makeSound(void) const;
};

#endif