#include "gun.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;

MachineGun::MachineGun() : Gun(), ammo(30)
{
    cout << "MachineGun()"
         << ": " << this << endl;
}

void MachineGun::shoot()
{
    ammo--;
    cout << "fire! ammo left: " << ammo << endl;
}

MachineGunAccessory::MachineGunAccessory(Gun *machineGun) : _machineGun(machineGun)
{
    cout << "MachineGunAccessory(): " << this << endl;
}

void MachineGunAccessory::shoot()
{
    _machineGun->shoot();
}

MachineGunScope::MachineGunScope(Gun *gun) : MachineGunAccessory(gun)
{
    cout << "MachineGunScope(): " << this << endl;
}

void MachineGunScope::shoot()
{
    MachineGunAccessory::shoot();
    zoomIn();
}

void MachineGunScope::zoomIn()
{
    cout << "zoomIn" << endl;
}

MachineGunGrenadeAttachment::MachineGunGrenadeAttachment(Gun *gun) : MachineGunAccessory(gun), grenades(3)
{
    cout << "MachineGunGrenadeAttachment(): " << this << endl;
}

void MachineGunGrenadeAttachment::shoot()
{
    MachineGunAccessory::shoot();
    fireGrenade();
}

void MachineGunGrenadeAttachment::fireGrenade()
{
    grenades--;
    cout << "fire grenade!" << endl;
    cout << "grenades left: " << grenades << endl;
}