#pragma once
#ifndef SIMPLEETHERNETRECIVER_HPP
#define SIMPLEETHERNETRECIVER_HPP
#include <vector>

using namespace std;

class SimpleEthernetReceiver : public IEthernetReciver
{

private:
    std::vector<std::string> receivedMessages;
    void processMessage(const std::string& message);
    void logMessage(const std::string& message);
public:
    SimpleEthernetReceiver();
    ~SimpleEthernetReceiver() override;

    void receiveMessage(const std::string& message) override;
};

#endif // SIMPLEETHERNETRECIVER_HPP