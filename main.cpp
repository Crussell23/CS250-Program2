/*
Author: Chanelle Russell
Course: CS 250
Program: Program Two: OO Concepts
Date: October 13, 2024

The purpose to provide a first experience with defining and using classes
Scenario: You have been tasked with writing classes that can be used by
the athletics' department at a local university.
The classes you are implement must be exactly as
specified by the following UML class diagram.

*/

#include <iostream>
#include "Athlete.h"
#include "Tennis.h"
#include "Volleyball.h"

using namespace std;

int main()
{
    Athlete sport(72, 140, 'M');
    cout << "Athlete: " << sport.getHeight() << " "
         << sport.getWeight() << " "
         << sport.getGender() << endl;

    Tennis martina = Tennis();
    martina.setServeSpeed(100);
    martina.setGender('F');
    Tennis bjorn(150,false);
    bjorn.setGender('M');
    if  (martina.getGender() == 'F')
       cout << "Martina serve speed: " << martina.getServeSpeed() << endl;

    VolleyBall kerri = VolleyBall();
    kerri.setGender('F');
    kerri.setPosition("Opposite Hitter");
    VolleyBall giba("Outside Hitter",23.2);
    giba.setGender('M');
    if  (kerri.getGender() == 'F')
       cout << "Kerri is an " << kerri.getPosition() << endl;

    return 0;
}
