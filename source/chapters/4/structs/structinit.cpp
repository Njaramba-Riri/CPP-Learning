#include <iostream>

using namespace std;

struct part{
    int modelnumber;
    int modelpart;
    float cost;
};

int main()
{
    part part1;
    part1 = {13, 456, 5729.78F};

    cout << "Model " << part1.modelnumber;
    cout << ", part " << part1.modelpart;
    cout << ", cost $" << part1.cost << endl;

    part part2;
    part2 = part1;

    cout << "Model " << part2.modelnumber;
    cout << ", part " << part2.modelpart;
    cout << ", cost $" << part2.cost << endl;

    return 0;
}
