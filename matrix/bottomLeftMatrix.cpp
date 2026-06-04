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
	void Display();
	void set(int i, int j, int x);
	int get(int i, int j);
	~BottomDiagonal();
};

int BottomDiagonal :: get(int i, int j)
{
	if(j <= i)
{
	return A[i-1];
}
	else return 0;
 
}

void BottomDiagonal :: set(int i, int j, int x)
{
	if (j <= i) A[i-1] = x;
}

void BottomDiagonal :: Display()
{
	for(int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (j<=i) cout << A[i] << " ";
			else cout << "0";
		} cout << endl;
	}
}

BottomDiagonal :: ~BottomDiagonal()
{
	delete[] A;
}

int main() 
{
	BottomDiagonal d = 4;
	d.set(1,1,1);
        d.set(2,2,2);
        d.set(3,3,3);
        d.set(4,4,4);

	d.Display();
	
	return 0;
}
