#ifndef LEVELMODEL_H
#define LEVELMODEL_H

#include <vector>
#include <string>

#include "CleanerModel.h"
#include "DishModel.h"

using namespace std;

class LevelModel
{
public:
    LevelModel();

private:
    vector<DishModel> m_dishes;
    vector<CleanerModel> m_cleaners;
    string m_levelName;
    //assets
};

#endif // LEVELMODEL_H
