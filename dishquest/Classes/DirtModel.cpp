#include "DirtModel.h"

DirtModel::DirtModel(const string& type, int health)
{
    m_type = type;
    m_health = health;
}

int DirtModel::getHealth() const
{
    return m_health;
}

string DirtModel::getType() const
{
    return m_type;
}

int DirtModel::adjustHealth(int delta)
{
    m_health += delta;
    if(m_health < 0)
    {
        m_health = 0;
    }

    return m_health;
}
