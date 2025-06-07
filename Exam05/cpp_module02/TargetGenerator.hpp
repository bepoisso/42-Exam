/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 19:22:11 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/07 19:22:12 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>

#include "ATarget.hpp"

class TargetGenerator {
private:
    std::map<std::string, ATarget*> _targetbook;

public:
    TargetGenerator();
    ~TargetGenerator(); // VOIR SI DELETE TOUT LE TARGETBOOK

    void learnTargetType(ATarget* target);
    void forgetTargetType(std::string const & type);
    ATarget* createTarget(std::string const & type);
};