#include <iostream>
#include <memory>

/*
@brief the ADAPTER design pattern uses the


*/

// USB interface
class UsbInterface
{
    public:
        virtual int power() = 0;
        virtual int data() = 0;
};

// Ethernet Interface
class EthernetInterface
{
    public:
        virtual int power() = 0;
        virtual int data() = 0;
};


// client
class EthernetCable
{
    EthernetInterface* ethernetHead;

    public:
        void plugIn(EthernetInterface* ethernetPort);
        void transferData();
};

// target
class UsbPort: public UsbInterface
{
    public:
        int power() override;
        int data() override;
};

// adapter: has a USB head, ethernet female
class Ethernet2Usb: public EthernetInterface
{
    UsbInterface* UsbSocket;

    public:
        void plugIn(UsbInterface* UsbPort);



};