/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:43:58 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 16:22:31 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock{
	
	public:
	
		Warlock(const std::string &Name, const std::string &Title);
		~Warlock();	
		
		const std::string	&getName() const;
		const std::string	&getTitle() const;
		void				setTitle(const std::string &Title);

		void				introduce() const;
		void				learnSpell(ASpell *Spell);
		void				forgetSpell(const std::string SpellName);
		void				launchSpell(std::string SpellName, const ATarget &Target);
	
	private:
	
		Warlock();
		Warlock(Warlock const &src);

		Warlock 			&operator=(const Warlock &rhs);
		
		std::string 			_name;
		std::string				_title;
		SpellBook 				_SpellBook;
};

#endif