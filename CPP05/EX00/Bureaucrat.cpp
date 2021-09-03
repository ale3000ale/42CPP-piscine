/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:46:44 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/03 19:07:02 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : name("None"), grade(150)
{
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ): name(src.getName()), grade(src.getGrade())
{
}

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name), grade(_grade)
{
}

	

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &Bureaucrat::operator=( Bureaucrat const & rhs ) 
{
	(void)rhs;
	return *this;
}

 std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}




/*
** --------------------------------- METHODS ----------------------------------
*/

	
	void	Bureaucrat::gradeAdd(void)
	{
		if (grade == HIGHEST_GRADE)
			throw Bureaucrat::GradeTooHighException();
		else
			grade--;
	}

	void	Bureaucrat::gradeSub(void)
	{
		if (grade == HIGHEST_GRADE)
			throw Bureaucrat::GradeTooLowException();
		else
			grade++;
	}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


	std::string	Bureaucrat::getName(void) const
	{
		return name;
	}

	int			Bureaucrat::getGrade(void) const
	{
		return grade;
	}

/* ************************************************************************** */

const char *	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade cannot advance");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade cannot drop");
}