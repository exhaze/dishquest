#ifndef DISHMODEL_H
#define DISHMODEL_H

#include <vector>
#include <string>

#include "DirtModel.h"

using namespace std;

class DishModel
{
public:
    DishModel(const string& type);
    ~DishModel();

    void addDirt(DirtModel* dirt);

    const string& getType();

private:
    vector<DirtModel*> m_dirts;
    string m_type;
    //assets
};

#endif // DISHMODEL_H
