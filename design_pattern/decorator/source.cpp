#include "gun.h"


int main()
{
    auto vanillaGun = new MachineGunScope(new MachineGun());
    vanillaGun->shoot();
    return 0;
}