#include "Vector3D.h"
#include <iostream>

using namespace std;

int main()
{
	Vector3d q;
	q.Read();
	cout << "edding vector:" << endl;
	q.addV();
	q.Display();

	Vector3d f;
	f.Read();
	cout << "multiplay to vector:" << endl;
	f.multiplayV();

	return 0;
}
