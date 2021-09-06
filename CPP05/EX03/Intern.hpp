#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <map>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"


class Intern
{
	std::map<std::string, int> types ;

	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );
		Form 			*makeForm(std::string name, std::string target);
};

std::ostream &			operator<<( std::ostream & o, Intern const & i );

#endif /* ********************************************************** INTERN_H */