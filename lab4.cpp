#include <iostream>
#include <cmath>
#define ArraySize 5
using namespace std;
class Array {
public:
    int** Arr = new int*[ArraySize];

    void InputArray(int** Arr);
    void OutputArray(int** Arr);
    void InsertSortColumnsIncr(int** Arr);
    void SumLinesOverMain(int** Arr);
    void GeometricAmount(int** Arr,int geom);
};

int main()
{
    int geom;
    int** Arr = new int*[ArraySize];
    for (int i = 0; i < ArraySize; i++)
    {
        Arr[i] = new int[ArraySize];
    }
    Array A;
    A.InputArray(Arr);
    cout << "\nVasha matryzia\n";
    A.OutputArray(Arr);
    A.InsertSortColumnsIncr(Arr);
    cout << "\nVidsortovana matryzia\n";
    A.OutputArray(Arr);
    A.SumLinesOverMain(Arr);
    A.GeometricAmount(Arr,geom);


}
void Array::InputArray(int** Arr)
{
    for (int i = 0; i < ArraySize; ++i)
    {
        for (int j = 0; j < ArraySize; ++j)
        {
            cout << "Enter [" << i + 1 << "]" << "[" << j + 1 << "]:";
            cin >> Arr[i][j];
        }

    }
}
void Array::OutputArray(int** Arr){
    cout << "\n";
    for (int i = 0; i < ArraySize; ++i)
    {
        for (int j = 0; j < ArraySize; ++j)
        {
            cout << Arr[i][j] << " ";
        }   cout << "\n";
    }
    cout << "\n\n";

}
void Array :: InsertSortColumnsIncr (int** Arr){
    int value, memory;
    for (int k = 0; k < ArraySize; k++)
        for (int i = 1; i < ArraySize; i++)
        {
            value = Arr[i][k]; memory = i;
            for (int j = 0; j < i; j++)
                if (value < Arr[j][k])
                {
                    memory = j;
                    break;
                }
            for (int j = i; j >= memory + 1; j--)
                Arr[j][k] = Arr[j - 1][k];
            Arr[memory][k] = value;
        }
}
void Array::SumLinesOverMain(int** Arr) {
    double product = 1;
    for (int i = 0; i<(ArraySize-1); i++)
    {
        int sum = 0, j = 1;
        for (j = j + i; j<ArraySize; j++)
        {
            sum = sum + Arr[i][j];
        }
        product = product*sum;
        cout << "suma elementiv nad golovnoyu diagonalliu " << i + 1 << " ryadka =" << sum << "\n";
    }
    cout << "\n\n";
}
void Array ::GeometricAmount(int** Arr,int product) {
    double geometric = pow(product, 1 * 1.0 / 4);
    cout << "Serednie geometrychne = " << geometric;
}