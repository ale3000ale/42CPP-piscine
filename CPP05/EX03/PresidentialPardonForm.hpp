#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{

	private:
		std::string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string _target);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );

		std::string getTarget() const;
		void		execute(Bureaucrat const &executor) const;
};


#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */