/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:44:04 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 15:29:35 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include <iostream>
#include <algorithm>

Warlock::Warlock(){}

Warlock::Warlock(const std::string &Name, const std::string &Title) : _name(Name), _title(Title){
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const &src){
	*this = src;
}

Warlock::~Warlock(){
	for (std::map<std::string, ASpell *>:: iterator it = _SpellBook.begin(); it != _SpellBook.end(); ++it)
		delete it->second;
	_SpellBook.clear();
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const{
	return this->_name;
}

const std::string &Warlock::getTitle() const{
	return this->_title;
}

void	Warlock::setTitle(const std::string &Title){
	this->_title = Title;
}

Warlock	&Warlock::operator=(const Warlock &rhs){
	if (this != &rhs){
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	}
	return *this;
}

void	Warlock::introduce() const{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *Spell){
	if (_SpellBook.find(Spell->getName()) == _SpellBook.end())
		_SpellBook[Spell->getName()] = Spell->clone();
}

void	Warlock::forgetSpell(const std::string SpellName){
	if (_SpellBook.find(SpellName) != _SpellBook.end())
	{
		delete _SpellBook[SpellName];
		_SpellBook.erase(SpellName);
	}
}

void	Warlock::launchSpell(std::string SpellName, const ATarget &Target){
	if (_SpellBook.find(SpellName) != _SpellBook.end())
		_SpellBook[SpellName]->launch(Target);
}