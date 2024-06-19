/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:47:10 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 15:23:48 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget{
	public:
		ATarget();
		ATarget(const std::string &type);
		ATarget(const ATarget &src);
		virtual ~ATarget();
		
		ATarget &operator=(const ATarget &rhs);

		const std::string &getType() const;

		virtual ATarget *clone() const = 0;

		void getHitBySpell(const ASpell &Spell) const;
	
	protected:
		std::string _type;
	
};

#endif