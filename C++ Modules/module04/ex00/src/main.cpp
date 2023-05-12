/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-hosr <hel-hosr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:55:21 by hel-hosr          #+#    #+#             */
/*   Updated: 2023/05/11 14:14:13 by hel-hosr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/colors.hpp"

int main() 
{
    std::cout<<GREEN<<"----------animal from animal----------"<<RESET<<std::endl;
    const Animal *animo = new Animal();
    std::cout<<"Type: "<<RED<<animo->getType()<<RESET<<std::endl;
    std::cout<<"Sound: ";
    animo->makeSound();
    delete animo;
    std::cout<<GREEN<<"--------------------------"<<RESET<<std::endl<<std::endl;

    std::cout<<GREEN<<"----------cat from animal----------"<<RESET<<std::endl;
    const Animal *kitty = new Cat();
    std::cout<<"Type: "<<RED<<kitty->getType()<<RESET<<std::endl;
    std::cout<<"Sound: ";
    kitty->makeSound();
    delete kitty;
    std::cout<<GREEN<<"--------------------------"<<RESET<<std::endl<<std::endl;

    std::cout<<GREEN<<"----------dog from animal----------"<<RESET<<std::endl;
    const Animal *doggy = new Dog();
    std::cout<<"Type: "<<RED<<doggy->getType()<<RESET<<std::endl;
    std::cout<<"Sound: ";
    doggy->makeSound();
    delete doggy;
    std::cout<<GREEN<<"--------------------------"<<RESET<<std::endl<<std::endl;

    std::cout<<GREEN<<"----------wrong animal from wrong animal----------"<<RESET<<std::endl;
    const WrongAnimal *wrongAnimo = new WrongAnimal();
    std::cout<<"Type: "<<RED<<wrongAnimo->getType()<<RESET<<std::endl;
    std::cout<<"Sound: ";
    wrongAnimo->makeSound();
    delete wrongAnimo;
    std::cout<<GREEN<<"--------------------------"<<RESET<<std::endl<<std::endl;

    std::cout<<GREEN<<"----------wrong cat from wrong animal----------"<<RESET<<std::endl;
    const WrongAnimal *wrongKitty = new WrongCat();
    std::cout<<"Type: "<<RED<<wrongKitty->getType()<<RESET<<std::endl;
    std::cout<<"Sound: ";
    wrongKitty->makeSound();
    delete wrongKitty;
    std::cout<<GREEN<<"--------------------------"<<RESET<<std::endl<<std::endl;

    std::cout<<GREEN<<"----------wrong cat from wrong cat----------"<<RESET<<std::endl;
    const WrongCat *wrongKitty2 = new WrongCat();
    std::cout<<"Type: "<<RED<<wrongKitty2->getType()<<RESET<<std::endl;
    std::cout<<"Sound: ";
    wrongKitty2->makeSound();
    delete wrongKitty2;
    std::cout<<GREEN<<"--------------------------"<<RESET<<std::endl<<std::endl;
    return 0;
 }