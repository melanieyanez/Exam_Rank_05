/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:07:42 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 15:22:38 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(const std::string &type) : _type(type){}
		
ATarget::ATarget(const ATarget &src) : _type(src.getType()){}
		
ATarget::~ATarget(){}
		
ATarget &ATarget::operator=(const ATarget &rhs){
	if (this == &rhs)
		return *this;
	_type = rhs.getType();
	return *this;
}

const std::string &ATarget::getType() const{
	return this->_type;
}

void ATarget::getHitBySpell(const ASpell &Spell) const{
	std::cout << this->_type << " has been " << Spell.getEffects() << "!" << std::endl;
}