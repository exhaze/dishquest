#ifndef CLEANERMODEL_H
#define CLEANERMODEL_H

#include <string>
#include <map>

using namespace std;

class CleanerModel
{
public:
    CleanerModel();

private:
    int m_remainingUses;
    map<string, int> m_strengthMap;
    //assets
};

#endif // CLEANERMODEL_H
