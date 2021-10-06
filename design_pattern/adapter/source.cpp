#include <iostream>
#include <memory>

#include "usb.h"

using std::cout;
using std::endl;

int main()
{
    auto ethernetCable = new EthernetCable();
    auto usbPort = new UsbPort();
    auto adapter = new Ethernet2UsbAdapter();

    adapter->plugIn(usbPort);
    ethernetCable->plugIn(adapter);
    ethernetCable->transferData();

    cout << "Successfully built" << endl;
    return 0;
}