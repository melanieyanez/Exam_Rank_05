/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:02:51 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 14:05:52 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell(){
	this->_name = "Fwoosh";
	this->_effects = "fwooshed";
}
		
Fwoosh::~Fwoosh(){}
		
Fwoosh *Fwoosh::clone() const{
	return new Fwoosh();
}