/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:25:48 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 15:22:25 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell{
	public:
		ASpell();
		ASpell(const std::string &name, const std::string &effects);
		ASpell(const ASpell &src);
		virtual ~ASpell();

		ASpell &operator=(const ASpell &rhs);

		std::string getName() const;
		std::string getEffects() const;

		virtual ASpell *clone() const = 0;

		void launch(const ATarget &target) const;

	protected:
		std::string _name;
		std::string _effects;
};

#endif