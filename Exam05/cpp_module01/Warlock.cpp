/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 12:33:37 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/07 16:30:12 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string & newName, const std::string & newTitle) : _name(newName), _title(newTitle) {
    std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
    // Suprimer le spellbook
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
    if (spell)
        _spellbook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string nameSpell) {
    std::map<std::string, ASpell*>::iterator it = _spellbook.find(nameSpell);
    if (it != _spellbook.end()) {
        delete it->second;
        _spellbook.erase(it);
    }
}

void Warlock::launchSpell(std::string nameSpell, ATarget & target) {
    std::map<std::string, ASpell*>::iterator it = _spellbook.find(nameSpell);
    if (it != _spellbook.end()){
        it->second->launch(target);
    }
}
