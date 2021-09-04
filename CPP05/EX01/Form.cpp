#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(const std::string _name, const int g_exe, const int g_sig) : 
	name(_name), grade_exe(g_exe), grade_sig(g_sig), sign(false)
{
	if (g_sig < HIGHEST_GRADE || g_exe < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	if (g_sig > LOWEST_GRADE || g_exe < HIGHEST_GRADE)
		throw Form::GradeTooLowException();
}

Form::Form() :
	name("None"), grade_exe(LOWEST_GRADE), grade_sig(LOWEST_GRADE), sign(false)
{
}

Form::Form( const Form & src ): 
	name(src.name), grade_exe(src.grade_exe), grade_sig(src.grade_sig), sign(src.sign)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &Form::operator=( Form const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form: [" << i.getName() << "] grade: " << i.getGrade() << "sign: " << i.getSign() ;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

	void	Form::beSigned(Bureaucrat &b)
	{
		if (b.getGrade() > MIN_GRADE)
			Form::GradeTooLowException();
		else
			sign = true;
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

		int			Form::getGrade(void) const
		{
			return grade;
		}
		std::string	Form::getName(void)	const
		{
			return name;
		}
		bool		Form::getSign(void) const
		{
			return sign;
		}

/* ************************************************************************** */

const char *	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too High");
}

const char *	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too Low");
}