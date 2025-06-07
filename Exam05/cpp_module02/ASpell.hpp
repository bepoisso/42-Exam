/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:21:34 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/07 19:21:35 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "ATarget.hpp"

class ATarget;

class ASpell {
protected:
    std::string _name;
    std::string _effects;

public:
    ASpell(std::string newName, std::string newEffects);
    ASpell(const ASpell & src);
    const ASpell & operator=(const ASpell & rhs);
    virtual ~ASpell();

    std::string getName(void) const;
    std::string getEffects(void) const;

    virtual ASpell* clone(void) const = 0;
    void launch(const ATarget & traget);
};