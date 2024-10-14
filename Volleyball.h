#ifndef VOLLEYBALL_H
#define VOLLEYBALL_H
#include "Athlete.h" // Include Athlete class
#include <string>
using namespace std;

class VolleyBall : public Athlete // Inherit from Athlete
{
    private:
        string m_position;
        float m_reactionTime;

    public:
        VolleyBall();
        VolleyBall(string, float);
        string getPosition();
        void setPosition(string);
        float getReactionTime();
        void setReactionTime(float);


    protected:


};

#endif // VOLLEYBALL_H
