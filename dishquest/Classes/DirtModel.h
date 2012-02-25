#ifndef DIRTMODEL_H
#define DIRTMODEL_H

#include <string>

using namespace std;

class DirtModel
{
public:
    DirtModel(const string& type, int health);

    int getHealth() const;
    string getType() const;

    int adjustHealth(int delta);

private:
    string m_type;
    int m_health;
    //position?
    //assets
};

#endif // DIRTMODEL_H
