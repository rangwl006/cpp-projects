#include "gun.h"
#include "text.h"

int main()
{
    // Gun* gunGun = new MachineGunScope(new MachineGunGrenadeAttachment(new MachineGun()));
    // gunGun->shoot();

    // delete gunGun;

    HtmlText* t = new HtmlText("hello world");

    t->printText();
    delete t;
    
    Text* b = new BoldTag( new HtmlText("bolded text") );
    b->printText();
    delete b;

    return 0;
}