/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 16:27:01 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 16:31:29 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <map>

class TargetGenerator{
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *Target);
		void forgetTargetType(const std::string &Target);
		ATarget *createTarget(const std::string &Target);

		std::map<std::string, ATarget *> getTargets() const;

	private:
		TargetGenerator(const TargetGenerator &src);
		TargetGenerator &operator=(const TargetGenerator &rhs);

		std::map<std::string, ATarget *> _targets;
};

#endif