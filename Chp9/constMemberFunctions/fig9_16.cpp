#include "Time.h"

int main()
{
    Time wakeUp(6,45,0);
    const Time noon(12,0,0);


    wakeUp.setHour(18);

    //error by compiler
    noon.setHour(12);

    wakeUp.getHour();

    noon.getMinute();
    noon.printUniversal();

    noon.printStandard();
}