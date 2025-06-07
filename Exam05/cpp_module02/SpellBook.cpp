/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:22:06 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/07 19:22:07 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {

}

SpellBook::~SpellBook() {
    _spellbook.clear();
}

ASpell* SpellBook::createSpell(std::string const & nameSpell) {
    std::map<std::string, ASpell*>::iterator it = _spellbook.find(nameSpell);
    if (it != _spellbook.end())
        return it->second->clone();
    return NULL;
}

void SpellBook::learnSpell(ASpell* spell) {
    if (spell)
        _spellbook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const & nameSpell) {
    std::map<std::string, ASpell*>::iterator it = _spellbook.find(nameSpell);
    if (it != _spellbook.end()) {
        delete it->second;
        _spellbook.erase(it);
    }
}