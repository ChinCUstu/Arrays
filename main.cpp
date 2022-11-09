//#include <iostream>
//using namespace std;
//int main() {
//    int SIZE = 1;
//    double a[SIZE];
//
//    cout << "Enter number of size: ";
//    cin >> SIZE;
//    cout << "Enter " << SIZE << " numbers:  \t";
//    for(int i = 0; i < SIZE; i++)
//        cin >> a[i];
//    cout << "In reverse order: ";
//    for(int j = SIZE -1; j >= 0; j--)
//        cout << "\t" << a[j];
//    return 0;
//}
#include <iostream>
using namespace std;

int sum(int[], int);
int main(){
    int a[] = {11, 33, 55, 77, 20};
    int size;
    size = sizeof(a) / sizeof (int);

    cout << "Sum(a, size) = " << sum(a, size) <<endl;
    cout << sizeof(a);
}

int sum(int b[], int size){
    int total = 0;
    for(int i = 0; i < size; i++)
        total += b[i];
    return total;
}