/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:57:28 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 16:20:13 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <map>

class SpellBook{
	public:
		SpellBook();
		virtual ~SpellBook();

		void learnSpell(ASpell *Spell);
		void forgetSpell(const std::string &SpellName);
		ASpell *createSpell(const std::string &SpellName);

		std::map<std::string, ASpell *> getSpells() const;
	
	private:
		SpellBook(const SpellBook &src);
		SpellBook &operator=(const SpellBook &rhs);

		std::map<std::string, ASpell *> _spells;	
};

#endif