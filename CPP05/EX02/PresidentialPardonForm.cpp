#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(): 
	Form("PresidentialPardonForm", 5, 25) ,target("None")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target):
	Form("PresidentialPardonForm", 5, 25) ,target(_target)
{}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ):
	Form("PresidentialPardonForm", 5, 25) ,target(src.getTarget())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
	}
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);

	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/
	std::string PresidentialPardonForm::getTarget() const
	{
		return (target);
	}

/* ************************************************************************** */