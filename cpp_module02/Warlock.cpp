/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:44:04 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 16:25:46 by melanieyane      ###   ########.fr       */
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
	this->_SpellBook.learnSpell(Spell);
}

void	Warlock::forgetSpell(const std::string SpellName){
	this->_SpellBook.forgetSpell(SpellName);
}

void	Warlock::launchSpell(std::string SpellName, const ATarget &Target){
	ASpell *Spell = this->_SpellBook.createSpell(SpellName);
	if (Spell)
	{
		Target.getHitBySpell(*Spell);
		delete Spell;
	}
}