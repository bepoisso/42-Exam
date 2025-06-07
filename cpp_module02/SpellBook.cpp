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