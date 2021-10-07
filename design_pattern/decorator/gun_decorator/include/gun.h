#pragma once
#include <iostream>
#include <string>

using std::cout;
using std::endl;

// base/core/non-optional class
class Gun
{
public:
    Gun()
    {
        cout << "Gun(): " << this << endl;
    }
    virtual void shoot() = 0;
};

class MachineGun : public Gun
{
public:
    MachineGun();
    void shoot();

private:
    int ammo;
};

// this is the decorator/accessory interface
// decorator inherits from the base
class MachineGunAccessory : public Gun
{
private:
    Gun *_machineGun;

public:
    MachineGunAccessory(Gun *machineGun);
    void shoot();
};

// the concrete decoration
class MachineGunScope : public MachineGunAccessory
{
public:
    MachineGunScope(Gun *gun);
    void shoot();
    void zoomIn();
};

class MachineGunGrenadeAttachment : public MachineGunAccessory
{
public:
    MachineGunGrenadeAttachment(Gun *gun);
    void shoot();
    void fireGrenade();

private:
    int grenades;
};