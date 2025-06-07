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