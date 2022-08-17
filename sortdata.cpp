#include <iostream>
#include <string>
using namespace std;

class sortData
{
private:
    int *data;
    int dataSize, maxNum;

public:
    void randomize()
    { // Constructor with parameters.
        for (int i = 0; i < dataSize; i++)
            data[i] = rand() % maxNum; // Error.
    }

    sortData(int size, string dataset, int max)
    { // Constructor with parameters.
        dataSize = size;
        maxNum = max;
        data = new int[dataSize];
        if (dataset == "inorder")
            // Generate in-order data starting from 0.
            for (int i = 0; i < dataSize; i++)
                data[i] = i;
        else if (dataset == "reverseorder")
            for (int i = 0; i < dataSize; i++)
                data[i] = maxNum - i - 1;
        else if (dataset == "random")
            randomize();
        else
            // Error.
            cout << "Error";    

    }
    void printData()
    {
        for (int i = 0; i < dataSize; i++)
            cout << data[i] << endl;
    }
};

int main()
{
    int dataSize = 20;
    int maxNum = 50;

    
    cout << "In-order data set." << endl;
    sortData inorder(dataSize, "inorder", maxNum);
    inorder.printData();
    cout << "/n/n/n";

     cout << "Reverse-order data set." << endl;
    sortData reverse(dataSize, "reverseorder", maxNum);
    reverse.printData();
    cout << endl << endl << endl << endl;

    cout << "Random order data set." << endl;
    sortData random(dataSize, "random", maxNum);
    random.printData();
    cout << endl;

    return 0;
}
