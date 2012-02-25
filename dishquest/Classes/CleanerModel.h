#ifndef CLEANERMODEL_H
#define CLEANERMODEL_H

#include <string>
#include <map>

using namespace std;

class CleanerModel
{
public:
    CleanerModel(const string& type, int uses);

    int getRemainingUses() const;

    void addStrength(const string* dirt_type, int effectiveness);

private:
    int m_remainingUses;
    string m_type;
    map<const string*, int> m_strengthMap;
    //assets
};

#endif // CLEANERMODEL_H
