#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    int count = 0;
    float sum = 0;
    float sum_of_square = 0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
            sum += stof(textline);
            sum_of_square += pow(stof(textline),2);
            count++;
    }
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    float mean=sum/count;
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sqrt((1.0/count)*sum_of_square-pow(mean,2));
}