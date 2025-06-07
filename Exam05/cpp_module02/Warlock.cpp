/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 12:33:37 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/07 19:10:45 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string & newName, const std::string & newTitle) : _name(newName), _title(newTitle) {
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    std::cout << _name << ": My job here is done!" << std::endl;
}


const std::string & Warlock::getName(void) const {
    return _name;
}

const std::string & Warlock::getTitle(void) const {
    return _title;    
}

void Warlock::setTitle(const std::string & newTitle) {
    _title = newTitle;    
}

void Warlock::introduce() const {
    std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;    
}

void Warlock::learnSpell(ASpell* spell) {
    _spellbook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string nameSpell) {
    _spellbook.forgetSpell(nameSpell);
}

void Warlock::launchSpell(std::string nameSpell, ATarget & target) {
    ASpell* spell = _spellbook.createSpell(nameSpell);
    if (spell != NULL) {
        spell->launch(target);
        delete spell;
    }
}
