/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:22:10 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/07 19:22:11 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {

}

TargetGenerator::~TargetGenerator() {

}

ATarget* TargetGenerator::createTarget(std::string const & type) {
    std::map<std::string, ATarget*>::iterator it = _targetbook.find(type);
    if (it != _targetbook.end())
        return it->second->clone();
    return NULL;
}

void TargetGenerator::learnTargetType(ATarget* target) {
    if (target)
        _targetbook[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const & type) {
    std::map<std::string, ATarget*>::iterator it = _targetbook.find(type);
    if (it != _targetbook.end())
    {
        delete it->second;
        _targetbook.erase(it);
    }
}
