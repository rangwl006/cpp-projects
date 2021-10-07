#pragma once

#include <iostream>
#include <memory>

class UsbInterface
{
    public:
        virtual int voltage() = 0;
        virtual int dataCables() = 0;
};

class UsbPort: public UsbInterface
{
    public:
        UsbPort();
        int voltage() override;
        int dataCables() override;
};

class EthernetInterface
{
    public:
        virtual int voltage() = 0;
        virtual int dataCables() = 0;
};

class EthernetCable
{
    EthernetInterface* plug;

    public:
        void plugIn(EthernetInterface* socket);
        void transferData();
};

class Ethernet2UsbAdapter: public EthernetInterface
{
    private:
        UsbInterface* usbPort;
    
    public:
        void plugIn(UsbInterface* port);
        int voltage();
        int dataCables();
};