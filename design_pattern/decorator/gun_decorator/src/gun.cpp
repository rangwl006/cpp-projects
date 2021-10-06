#include "gun.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;

MachineGun::MachineGun():Gun(), ammo(30)
{
    cout << "MachineGun()" << ": " << this << endl;
}

void MachineGun::shoot()
{
    ammo--;
    cout << "fire!" << endl;
    cout << "ammo left: " << ammo << endl;
}

MachineGunAccessory::MachineGunAccessory(Gun* machineGun):_machineGun(new MachineGun)
{
    cout << "MachineGunAccessory(): " << this << endl;
}

void MachineGunAccessory::shoot()
{
    _machineGun->shoot();
}

MachineGunScope::MachineGunScope(Gun* gun): MachineGunAccessory(gun)
{
    cout << "MachineGunScope(): " << this << endl;
}

void MachineGunScope::shoot()
{
    MachineGunAccessory::shoot();
    cout << "Shooting w scope" << endl;
}

