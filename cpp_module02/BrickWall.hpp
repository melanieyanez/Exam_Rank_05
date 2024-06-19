/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brickwall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melanieyanez <melanieyanez@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:53:24 by melanieyane       #+#    #+#             */
/*   Updated: 2024/06/19 15:54:21 by melanieyane      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget{
	public:
		BrickWall();
		virtual ~BrickWall();
		
		BrickWall *clone() const;
};

#endif