/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:21:32 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/07 19:21:33 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string newName, std::string newEffects) : _name(newName), _effects(newEffects) {

}

ASpell::ASpell(const ASpell & src) : _name(src._name), _effects(src._effects) {
}

const ASpell & ASpell::operator=(const ASpell & rhs) {
    if (this != &rhs) {
        _name = rhs._name;
        _effects = rhs._effects;
    }
    return *this;
}

ASpell::~ASpell() {
}


std::string ASpell::getName(void) const {
    return _name;
}

std::string ASpell::getEffects(void) const {
    return _effects;
}

void ASpell::launch(const ATarget & target) {
    target.getHitBySpell(*this);
}