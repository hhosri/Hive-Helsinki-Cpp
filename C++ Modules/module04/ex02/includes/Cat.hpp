/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:26:38 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 15:51:26 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{

    public:
        //constructor
        Cat (void);
        //copy constructor
        Cat (const Cat &src);
        //overload operator =
        Cat& operator = (const Cat &src_rh);
        //deconstructor
        ~Cat (void);

        //member functions
        void makeSound(void) const;
        Brain *getBrain(void);
    private:
        Brain   *_brain;
};

#endif