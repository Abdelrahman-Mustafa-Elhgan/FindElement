#include <iostream>
using namespace std;


int main()
{

    int element = 0;
    int index = 0;
    int founded = 0;
    int arr[5] = {5, 6, 7, 4, 3};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " \n" ;
    }
    cout << "Enetr the element that you want to search on : ";
    cin >> element;

    for (int i = 0; i < 5; i++)
    {
        if (element == arr[i]) {
            index = i;
            founded = 1;
        } 
    }
        if (founded == 1) {
            cout << "Founded" << "\n";
            cout << "index of element is " << index << "\n";
        } else {
            cout << "Not founded" << "\n";
        }


}
	