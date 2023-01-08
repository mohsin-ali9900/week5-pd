#include <iostream>
#include <windows.h>
using namespace std;

void project(int,int,int);

main()
{
    int hours,days,workers;

    cout<<"Housrs needed are(0 - 200000) : ";
    cin>>hours;
    cout<<"No of days(0 - 20000) : ";
    cin>>days;
    cout<<"No of all workers(0 - 200) : ";
    cin>>workers;

    project(hours,days,workers);

}

void project(int hours,int days,int workers)
{
    int totalhours,traininghours,finalhours,nlhours1,finalhoursper,nlhours2;

    totalhours=days*10;
    traininghours=(totalhours*10)/100;
    finalhoursper=totalhours-traininghours;
    finalhours=finalhoursper*workers;
    nlhours1=hours-finalhours;
    nlhours2=finalhours-hours;

    if(finalhours<hours)
    {
        cout<<"Not enough time! "<<nlhours1 <<" hours needed";
    }

    if(finalhours>=hours)
    {
        cout<<"yes "<<nlhours2<<" hours left";
    }
}