/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:21:37 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/07 19:21:38 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "ASpell.hpp"

class ASpell;

class ATarget {
protected:
    std::string _type;
public:
    ATarget(std::string newType);
    ATarget(const ATarget & src);
    const ATarget & operator=(const ATarget & rhs);
    virtual ~ATarget();

    const std::string & getType(void) const;
    virtual ATarget* clone() const = 0;

    void getHitBySpell(const ASpell & spell) const;
};