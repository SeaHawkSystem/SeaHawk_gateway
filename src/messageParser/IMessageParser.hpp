#pragma once
#ifndef MESSAGEPARSER_HPP
#define MESSAGEPARSER_HPP

#include <string>
#include <vector>
#include <memory>

class IMessageParser
{
public:
    virtual ~IMessageParser() {};
    virtual parseMessageHeader(const std::string& message) = 0;
}