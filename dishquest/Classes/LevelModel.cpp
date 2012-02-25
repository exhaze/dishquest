#include "LevelModel.h"

LevelModel::LevelModel(const string& name)
{
    m_levelName = name;
}

void LevelModel::addDish(DishModel* dish)
{
    m_dishes.push_back(dish);
}

void LevelModel::addCleaner(CleanerModel* cleaner)
{
    m_cleaners.push_back(cleaner);
}
