/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:22:08 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/07 19:22:09 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"
#include "ATarget.hpp"

#include <iostream>
#include <string>
#include <map>

class SpellBook {
private:
    std::map<std::string , ASpell*> _spellbook;

public:
    SpellBook();
    ~SpellBook();

    ASpell* createSpell(std::string const & nameSpell);
    void learnSpell(ASpell* spell);
    void forgetSpell(std::string const & nameSpell);
};