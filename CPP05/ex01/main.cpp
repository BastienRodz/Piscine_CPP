/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barodrig <barodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:04:54 by barodrig          #+#    #+#             */
/*   Updated: 2022/10/03 13:26:47 by barodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void    workingFine()
{
    std::cout << "Creating a working bureaucrat with a grade of 150." << std::endl;
    Bureaucrat *Darmanin = new Bureaucrat("Darmanin", 150);
    std::cout << *Darmanin;
    for (int i = 0; i < 149; i++)
        Darmanin->upGrade();
    std::cout << *Darmanin;
    for (int i = 0; i < 149; i++)
        Darmanin->downGrade();
    std::cout << *Darmanin;
    if (Darmanin)
        delete (Darmanin);
}

void    tooLow( void )
{
    std::cout << "\n\nTrying to create a Bureaucrat with a grade of 151 (IMPOSSIBLE)." << std::endl;
    Bureaucrat Darmanin("Darmanin", 151);
}

void    gradeDownException( void )
{
    std::cout << "\n\nTrying to create a Bureaucrat with a grade of 150." << std::endl;
    Bureaucrat LeMaire("LeMaire", 150);
    std::cout << LeMaire;
    std::cout << "Now trying to use downGrade() (IMPOSSIBLE)" << std::endl;
    LeMaire.downGrade();
    std::cout << LeMaire;
}

void    tooHigh( void )
{
    std::cout << "\n\nTrying to create a Bureaucrat with a grade of 0 (IMPOSSIBLE)." << std::endl;
    Bureaucrat Darmanin("Darmanin", 0);
    std::cout << Darmanin;
}

void    gradeUpException( void )
{
    std::cout << "\n\nNow Creating a bureaucrat with a grade 1." << std::endl;
    Bureaucrat LeMaire("LeMaire", 1);
    std::cout << LeMaire;
    std::cout << "Now trying to use upGrade() (IMPOSSIBLE)" << std::endl;
    LeMaire.upGrade();
    std::cout << LeMaire;
}

int     main( void )
{
    {
        try
        {
            workingFine();
        }
        catch (std::exception & e)
        {
            std::cout << e.what();
        }
    }
    {
        try
        {
            tooLow();
        }
        catch (std::exception & e)
        {
            std::cout << e.what();
        }
    }
    {
        try
        {
            gradeDownException();
        }
        catch (std::exception & e)
        {
            std::cout << e.what();
        }
    }
    {
        try
        {
            tooHigh();
        }
        catch (std::exception & e)
        {
            std::cout << e.what();
        }   
    }
    {
        try
        {
            gradeUpException();
        }
        catch (std::exception & e)
        {
            std::cout << e.what();
        }
    }
    return (0);
}