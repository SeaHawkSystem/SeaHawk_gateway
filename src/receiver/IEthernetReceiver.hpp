#pragma once
#ifndef IETHERNETRECIVER_HPP
#define IETHERNETRECIVER_HPP

#include <string>

class IEthernetReciver
{
public:
    virtual ~IEthernetReciver() {};
    virtual void receiveMessage(const std::string& message) = 0;
};

#endif // IETHERNETRECIVER_HPP