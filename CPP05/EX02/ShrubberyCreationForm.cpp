#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("ShrubberyCreationForm",137, 145), target("None")
{
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string _target ):
	Form("ShrubberyCreationForm",137, 145), target(_target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ):
	Form("ShrubberyCreationForm",137, 145), target(src.getTarget())
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);

	std::string	buf = "(pwd; find . | sort) > " + target + "_shrubbery";
	const char	*exectree = buf.c_str();
	if (std::system(exectree))
	{
		std::cout << "Error: system function\n";
		std::exit(EXIT_FAILURE);
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ShrubberyCreationForm::getTarget() const
{
	return	target;
}

/* ************************************************************************** */