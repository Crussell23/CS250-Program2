#include "Athlete.h"

Athlete::Athlete()
{
    m_height = 1;
    m_weight = 1;
    m_gender = 'M';
}

Athlete::Athlete(int height, int weight, char gender)
{
    m_height = height;
    m_weight = weight;
    m_gender = gender;
}

int Athlete::getHeight()
{
    return m_height;
}

void Athlete::setHeight(int height)
{
    m_height = height;
}

int Athlete::getWeight()
{
   return m_weight;
}

void Athlete::setWeight(int weight)
{
    m_weight = weight;
}

char Athlete::getGender()
{
    return m_gender;
}

void Athlete::setGender(char gender)
{
    m_gender = gender;
}
