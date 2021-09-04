#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"



class Form
{
	private:
		bool				sign;
		const std::string	name;
		const int			grade_exe;
		const int			grade_sig;

	public:

		Form();
		Form(const std::string _name, const int g_exe, const int g_sig);
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );
		void		beSigned(Bureaucrat &b);
		int			getGrade(void)	const;
		std::string	getName(void)	const;
		bool		getSign(void)	const;
		

	class GradeTooHighException: public std::exception
	{ 
		const char *what() const throw();
	};
	
	class GradeTooLowException: public std::exception
	{ 
		const char *what() const throw();
	};


};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */