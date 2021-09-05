#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm():
	Form("RobotomyRequestForm", 45, 72), target("None")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target):
	Form("RobotomyRequestForm", 45, 72), target(_target)
{
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ):
	Form("RobotomyRequestForm", 45, 72), target(src.getTarget())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/


void		RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);

	if (std::rand() % 2)
	{
		std::cout << "BRRRRRRRR"
		<< std::endl << this->target << " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << "BRRRRRRRR"
		<< std::endl << this->target << " failed to lobotomize" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string RobotomyRequestForm::getTarget() const
{
	return target;
}

/* ************************************************************************** */