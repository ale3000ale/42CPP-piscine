#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(const std::string _name, const int g_exe, const int g_sig) : 
	sign(false),name(_name), grade_exe(g_exe), grade_sig(g_sig)
{
	if (g_sig < HIGHEST_GRADE || g_exe < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	if (g_sig > LOWEST_GRADE || g_exe > LOWEST_GRADE)
		throw Form::GradeTooLowException();
}

Form::Form() :
	sign(false),name("None"), grade_exe(LOWEST_GRADE), grade_sig(LOWEST_GRADE)
{
}

Form::Form( const Form & src ): 
	sign(src.sign), name(src.name), grade_exe(src.grade_exe), grade_sig(src.grade_sig)
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
	o 	<< "Form: [" << i.getName() << "] grade exe: " << i.getGradeExe() <<
		" grade sign: " << i.getGradeSig() << "sign: " << i.getSign() ;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

	void	Form::beSigned(Bureaucrat &b)
	{
		if (b.getGrade() > grade_sig)
		{
			throw Form::GradeTooLowException();
		}
		else
		{
			sign = true;
		}
			
	}

	void		Form::execute(Bureaucrat const & executor) const
	{
		if (!Form::getSign())
		{
			throw Form::NoSignException();
		}
		if (executor.getGrade() > grade_exe)
		{
			throw Form::GradeTooLowException();
		}
		
	}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

		int			Form::getGradeExe(void) const
		{
			return grade_exe;
		}
		int			Form::getGradeSig(void) const
		{
			return grade_sig;
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

const char *	Form::NoSignException::what() const throw()
{
	return ("Not signed");
}