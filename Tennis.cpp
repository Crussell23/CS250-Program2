#include "Tennis.h"

Tennis::Tennis()
{
    int m_serveSpeed = 1;
    bool  m_serveAndVolley = false;
}

Tennis::Tennis(int serveSpeed, bool serveAndVolley)
{
    m_serveSpeed = serveSpeed;
    m_serveAndVolley = serveAndVolley;
}

int Tennis::getServeSpeed()
{
    return m_serveSpeed;
}
void Tennis::setServeSpeed(int serveSpeed)
{
    m_serveSpeed = serveSpeed;
}
bool Tennis::getServeAndVolley()
{
    return m_serveAndVolley;
}
void Tennis::setServeAndVolley(bool serveAndVolley)
{
    m_serveAndVolley = serveAndVolley;
}
