#include <iostream>
#include <vector>
using namespace std;

struct Part {int part_count;float part_cost;};

float avgPart(vector<Part> partsList, float &totalCost){
    float avgCost = 0;
    int numParts = 0;
    totalCost = 0;
    int size = partsList.size();
    if (size == 0){
        avgCost = 0;
    }
    else{
        for(int i = 0; i < size; i++){
            numParts += partsList.at(i).part_count;
            totalCost = totalCost + partsList.at(i).part_count * partsList.at(i).part_cost;
        }
        avgCost = totalCost/numParts;
    }
    return avgCost;
}

int main()
{

}
