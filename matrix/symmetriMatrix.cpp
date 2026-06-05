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

    void set(int i, int x)
    {
        A[i-1] = x;
    }

    int get(int i, int j)
    {
        if(j <= i) return A[j-1];
        else return A[i-1];
    
    }

    void Display()
    {
        for(int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << get(i,j);

            } cout << endl;
        }
    }

    ~BottomDiagonal()
    {
        delete[] A;
    }
};


int main() 
{
	BottomDiagonal d(5);

    d.set(0,1);
    d.set(1,2);
    d.set(2,3);
    d.set(3,4);
    d.set(4,5);

	d.Display();
	
	return 0;
}
