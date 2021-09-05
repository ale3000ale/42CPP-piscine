/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexmarcelli <alexmarcelli@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:26:07 by amarcell          #+#    #+#             */
/*   Updated: 2021/09/05 22:19:59 by alexmarcell      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

#define LOWEST_GRADE	150
#define HIGHEST_GRADE	1

/* It must have a constant name, and a grade,
 that ranges from 1 (highest possible) to 150 (lowest possible) */
 
class Form;

class Bureaucrat
{
	private:
		const std::string		name;
		int						grade;


	public:

		Bureaucrat(const std::string _name, int _grade);
		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();
		
		Bureaucrat &operator=( Bureaucrat const & rhs );
		
		void		signForm(Form &form);

		std::string	getName(void) const;
		int		getGrade(void) const;
		void	gradeAdd(void);
		void	gradeSub(void);

	class GradeTooHighException: public std::exception
	{ 
		const char *what() const throw();
	};

	class GradeTooLowException: public std::exception
	{ 
		const char *what() const throw();
	};

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */