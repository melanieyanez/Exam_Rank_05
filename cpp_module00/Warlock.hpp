/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:43:58 by melanieyane       #+#    #+#             */
/*   Updated: 2024/05/21 21:23:50 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock{
	
	public:
	
		Warlock(const std::string &Name, const std::string &Title);
		~Warlock();	
		
		const std::string	&getName() const;
		const std::string	&getTitle() const;
		void				setTitle(const std::string &Title);

		void				introduce() const;
	
	private:
	
		Warlock();
		Warlock(Warlock const &src);

		Warlock 			&operator=(const Warlock &rhs);
		
		std::string 		_name;
		std::string			_title;
		
};

#endif