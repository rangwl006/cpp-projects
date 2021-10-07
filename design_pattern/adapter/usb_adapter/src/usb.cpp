#include "usb.h"

#include <iostream>
#include <memory>

using std::cout;
using std::endl;

UsbPort::UsbPort():UsbInterface()
{
    cout << "Initialised USB Port" << endl;   
}

int UsbPort::voltage()
{
    return 5;
}

int UsbPort::dataCables()
{
    return 2;
}

void EthernetCable::plugIn(EthernetInterface* socket)
{
    plug = socket;
}

void EthernetCable::transferData()
{
    if (plug->voltage() > 5)
    {
        cout << "port fried" << endl;
        return;
    }

    if (plug->voltage() < 5 && plug->dataCables() > 5)
    {
        std::cout << "Transferring data" << std::endl;
    }
}

void Ethernet2UsbAdapter::plugIn(UsbInterface* port)
{
    usbPort = port;
}

int Ethernet2UsbAdapter::voltage()
{
    return 2;
}

int Ethernet2UsbAdapter::dataCables()
{
    return 10;
}
