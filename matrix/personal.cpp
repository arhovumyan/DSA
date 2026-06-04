#include <iostream>
using namespace std;

class Diagonal
{
    private:
    int n;
    int *A;

    public:
    Diagonal(int n)
    {
        this->n=n;
        A=new int[n];
    }
    void set(int i, int j, int x); //for storing values
    int get(int i, int j); //for reading and retrieving values 
    void Display();
    ~Diagonal();
};

void Diagonal::set(int i, int j, int x)
{
    if (i == j) 
    {
        A[i-1] = x;
    }
}

int Diagonal::get(int i, int j)
{
   if (i == j) return A[i-1];
   else return 0;
}

void Diagonal::Display()
{
        for (int i = 0;i < n;i++)
        {
            for (int j = 0;j < n;j++)
                {
                    if (i == j) cout << A[i] << " ";
                    else cout << "0";
                }
            cout << endl;
        }
}

Diagonal::~Diagonal()
{
    delete[] A;
}


int main()
{
    Diagonal d(4);

    d.set(1, 1, 5);
    d.set(2, 2, 8);
    d.set(3, 3, 9);
    d.set(4, 4, 12);

    d.Display();

    return 0;
}