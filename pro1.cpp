#include <iostream>

using namespace std;

int main()

{

int n,m;

cout << "enter minimum : ";

cin >> n ;

cout << "enter maximum : ";

cin >> m;

for (int i = n + 1; i < m; i++)

{

int b = i % 5;

if (b == 0)

cout << i<<'\t';

}

system("pause");

}