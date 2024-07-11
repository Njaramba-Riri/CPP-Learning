#include <iostream>

using namespace std;

struct part
{
    int modelnumber;
    int modelpart;
    float cost;

};

int main()
{
    part part1;

    part1.modelnumber = 1;
    part1.modelpart = 40;
    part1.cost = 234.238F;

    cout << "Model " << part1.modelnumber;
    cout << ", part " << part1.modelpart;
    cout << ", cost " << part1.cost << endl;

    return 0;
}
