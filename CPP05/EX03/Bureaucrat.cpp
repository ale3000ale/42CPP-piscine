/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarcell <amarcell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:46:44 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/06 17:27:31 by amarcell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	if (grade < HIGHEST_GRADE)
		throw Bureaucrat::GradeTooHighException();
	if (grade > LOWEST_GRADE)
		throw Bureaucrat::GradeTooLowException();
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
		if (grade == LOWEST_GRADE)
			throw Bureaucrat::GradeTooLowException();
		else
			grade++;
	}

	void		Bureaucrat::signForm(Form &form)
	{
		try
		{
			form.beSigned(*this);
			std::cout << name <<" signs " << form << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << name <<" cannot signs " << form  << " because ";
			std::cerr << e.what() << '\n';
		}
	}

	void		Bureaucrat::executeForm(Form const & form)
	{
		std::cout << name <<" try to execute form:" << form.getName() << std::endl;
		try
		{
			form.execute(*this);
		}
		catch(const std::exception& e)
		{
			std::cerr << name << " have problems whith the execution of the form because:\n "
			<< e.what() << '\n';
		}
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
	return ("Burocrat Grade cannot advance");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Burocrat Grade cannot drop");
}