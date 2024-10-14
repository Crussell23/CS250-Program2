#ifndef TENNIS_H
#define TENNIS_H
#include "Athlete.h" // Include Athlete class
#include <string>

class Tennis :public Athlete
{
    private:
        int m_serveSpeed;
        bool  m_serveAndVolley;

    public:
        Tennis();
        Tennis(int, bool);
        int getServeSpeed();
        void setServeSpeed(int);
        bool getServeAndVolley();
        void setServeAndVolley(bool);

    protected:


};

#endif // TENNIS_H
