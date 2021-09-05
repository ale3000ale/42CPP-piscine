#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <string>

class ShrubberyCreationForm: public Form
{
	private:
		std::string target;
	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string _target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );
		std::string getTarget() const;
		void		execute(Bureaucrat const &executor) const;

};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */