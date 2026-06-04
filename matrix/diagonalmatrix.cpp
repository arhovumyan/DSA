#include <iostream>
using namespace std;

class Diagonal
{
    private:
    int n;
    int *A; //pointer so we can dynamically create an array

    public://create a constructor
    Diagonal(int n) //takes the dimensions
    {
        this->n=n; //assign n to the n from the private
        A=new int[n]; //create an array
    }
    
    void set(int i, int j, int x);
    int get(int i , int j); //retrieve the data
    void Display();

    ~Diagonal();//destructor
};

void Diagonal::set(int i, int j, int x)
{
    if (i == j)
    {
        A[i-1]=x;
    }
}
int Diagonal::get(int i, int j)
{
    if (i==j) return A[i-1];
    else return 0;
}

void Diagonal::Display()
{
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < n; j ++)
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