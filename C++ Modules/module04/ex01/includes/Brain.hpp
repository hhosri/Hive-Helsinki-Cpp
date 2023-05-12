/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:20:55 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 15:51:31 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "colors.hpp"
#include <iostream>

class Brain
{
    public:
        //constructpr
        Brain (void);
        //copy constructor
        Brain (const Brain &src);
        //overload operator =
        Brain &operator=(const Brain &src_rh);
        //deconstructor
        ~Brain(void);

        //set-get
        void        setIdea(std::string idea, int index);
        std::string getIdea(int index);
    private:
        std::string _ideas[100];


};


#endif