/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:27:13 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 16:42:11 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){
	for (std::map<std::string, ATarget *>::iterator it = this->_targets.begin(); it != this->_targets.end(); ++it)
		delete it->second;
	this->_targets.clear();
}

void TargetGenerator::learnTargetType(ATarget *Target){
	this->_targets[Target->getType()] = Target->clone();
}

void TargetGenerator::forgetTargetType(const std::string &Target){
	if (this->_targets.find(Target) != this->_targets.end()){
		delete this->_targets[Target];
		this->_targets.erase(Target);
	}
}
		
ATarget *TargetGenerator::createTarget(const std::string &Target){
	ATarget *newTarget = NULL;
	if (this->_targets.find(Target) != this->_targets.end())
		newTarget = this->_targets[Target]->clone();
	return newTarget;
}

std::map<std::string, ATarget *> TargetGenerator::getTargets() const{
	return this->_targets;
}

TargetGenerator::TargetGenerator(const TargetGenerator &src) : _targets(src.getTargets()){}
		
TargetGenerator &TargetGenerator::operator=(const TargetGenerator &rhs){
	if (this != &rhs)
		this->_targets = rhs.getTargets();
	return *this;
}