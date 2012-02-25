#include "DishModel.h"

DishModel::DishModel(const string& type)
{
    m_type = type;
}

DishModel::~DishModel()
{
    while(!m_dirts.empty())
    {
       m_dirts.pop_back();
    }
}

const string& DishModel::getType()
{
    return m_type;
}

void DishModel::addDirt(DirtModel* dirt)
{
    m_dirts.push_back(dirt);
}
