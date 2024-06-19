/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:15:02 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 15:22:02 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(const std::string &name, const std::string &effects) : _name(name), _effects(effects){}
		
ASpell::ASpell(const ASpell &src) : _name(src.getName()), _effects(src.getEffects()){}
		
ASpell::~ASpell(){}

ASpell &ASpell::operator=(const ASpell &rhs){
	if (this == &rhs)
		return *this;
	_name = rhs.getName();
	_effects = rhs.getEffects();
	return *this;
}

std::string ASpell::getName() const{
	return _name;
}
		
std::string ASpell::getEffects() const{
	return _effects;
}

void ASpell::launch(const ATarget &target) const{
	target.getHitBySpell(*this);
}
