#include <iostream>
using namespace std;

int main(void) {
    int nHour, nMin, nSec, sHour, sMin, sSec, rHour, rMin, rSec;
    scanf("%d:%d:%d", &nHour, &nMin, &nSec);
    scanf("%d:%d:%d", &sHour, &sMin, &sSec);
    if(sSec >= nSec) rSec = sSec - nSec;
    else {
        sMin--;
        rSec = sSec + 60 - nSec;
    }
    if(sMin >= nMin) rMin = sMin - nMin;
    else {
        sHour--;
        rMin = sMin + 60 - nMin;
    }
    if(sHour >= nHour) rHour = sHour - nHour;
    else {
        rHour = sHour + 24 - nHour;
    }
    printf("%02d:%02d:%02d", rHour, rMin, rSec);
}
