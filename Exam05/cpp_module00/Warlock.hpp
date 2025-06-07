/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 12:33:43 by bepoisso          #+#    #+#             */
/*   Updated: 2025/06/07 12:51:02 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Warlock
{
private :
    std::string _name;
    std::string _title; 

public :
    Warlock(const std::string & newName, const std::string & newTitle);
    ~Warlock();
    
    const std::string & getName(void) const;
    const std::string & getTitle(void) const;
    void setTitle(const std::string & newTitle);

    void introduce() const;
};