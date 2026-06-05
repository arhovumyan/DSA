#include <iostream>
using namespace std;

class BottomDiagonal
{
private:
    int n;
    int *A;

public:
    BottomDiagonal(int n)
    {
        this->n = n;
        A = new int[n];
    }
    
    void set(int i, int x);
    int get(int i, int j);
    void Display();
    ~BottomDiagonal();
};

void BottomDiagonal::set(int i, int x)
{
    A[i] = x;
}

int BottomDiagonal::get(int i, int j)
{
    if (j <= i)
    {
        return A[j];
    }
    else
    {
        return A[i];
    }
}

void BottomDiagonal::Display()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << get(i, j);
        }
        cout << endl;
    }
}

BottomDiagonal::~BottomDiagonal()
{
    delete[] A;
}

int main()
{
    BottomDiagonal d(5);

    d.set(0, 2);
    d.set(1, 3);
    d.set(2, 4);
    d.set(3, 5);
    d.set(4, 6);

    d.Display();

    return 0;
}