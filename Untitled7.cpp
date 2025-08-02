#include <iostream>
using namespace std;
int main() {
int arr[5], key, found = 0;for(int i = 0; i < 5; i++)
cin >> arr[i];
cout << "Enter element to search: "; cin >> key;
for(int i = 0; i < 5; i++) { if(arr[i] == key) {
found = 1;
break;
}
}
if(found)
cout << "Element found!"; else
cout << "Not found!"; return 0;
}
