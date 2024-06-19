/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:04:43 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 16:40:13 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){
	for (std::map<std::string, ASpell *>::iterator it = this->_spells.begin(); it != this->_spells.end(); it++)
		delete it->second;
	this->_spells.clear();
}

SpellBook::SpellBook(const SpellBook &src) : _spells(src.getSpells()){}

SpellBook &SpellBook::operator=(const SpellBook &rhs){
	if (this != &rhs)
		this->_spells = rhs.getSpells();
	return *this;
}

void SpellBook::learnSpell(ASpell *Spell){
	this->_spells[Spell->getName()] = Spell->clone();
}

void SpellBook::forgetSpell(const std::string &SpellName){
	if (this->_spells.find(SpellName) != this->_spells.end()){
		delete this->_spells[SpellName];
		this->_spells.erase(SpellName);
	}
}

ASpell *SpellBook::createSpell(const std::string &SpellName){
	ASpell *newSpell = NULL;
	if (this->_spells.find(SpellName) != this->_spells.end())
		newSpell = this->_spells[SpellName]->clone();
	return newSpell;
}

std::map<std::string, ASpell *> SpellBook::getSpells() const{
	return this->_spells;
}
	