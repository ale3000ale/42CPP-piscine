#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	types.insert(std::pair<std::string,int>("ShrubberyCreationForm"	, 1));
	types.insert(std::pair<std::string,int>("RobotomyRequestForm"	, 2));
	types.insert(std::pair<std::string,int>("PresidentialPardonForm", 3));
}

Intern::Intern( const Intern & src )
{
	(void)src;
	types.insert(std::pair<std::string,int>("ShrubberyCreationForm"	, 1));
	types.insert(std::pair<std::string,int>("RobotomyRequestForm"	, 2));
	types.insert(std::pair<std::string,int>("PresidentialPardonForm", 3));
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
	{	
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	(void)i;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

Form 			*Intern::makeForm(std::string name, std::string target)
{
	Form *f;
	std::cout << "TYPE: " << types[name] << std::endl;
	switch (types[name])
	{
		case 0:
			f = new ShrubberyCreationForm(target);
			break;
		case 1:
			f = new ShrubberyCreationForm(target);
			break;
		case 2:
			f = new RobotomyRequestForm(target);
			break;
		case 3:
			f = new PresidentialPardonForm(target);
			break;
	}
	std::cout << "Intern creates " << *f << "\nTARGET: "<< target<< std::endl;
	return (f);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */