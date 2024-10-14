#ifndef ATHLETE_H
#define ATHLETE_H


class Athlete
{
    private:
        int m_height;
        int m_weight;
        char m_gender;

    public:
        Athlete();
        Athlete(int, int, char);
        int getHeight();
        void setHeight(int);
        int getWeight();
        void setWeight(int);
        char getGender();
        void setGender(char);


    protected:
};

#endif // ATHLETE_H