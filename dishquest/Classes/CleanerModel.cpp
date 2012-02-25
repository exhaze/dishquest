#include "CleanerModel.h"

CleanerModel::CleanerModel(const string& type, int uses)
{
    m_type = type;
    m_remainingUses = uses;
}

int CleanerModel::getRemainingUses() const
{
    return m_remainingUses;
}

void CleanerModel::addStrength(const string* dirt_type, int effectiveness)
{
    m_strengthMap.insert(pair<const string*, int>(dirt_type, effectiveness));
}
