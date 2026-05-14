
#include <iostream>
using namespace std;
int main(){
  string names[5]={"Deng","Mohamed","Ahmed","Lual","Robert"};
  int ages[5]={16,23,34,45,35};
 string key;
int low = 0,high =4,mid;

bool found = false;
cout << "Enter name to search:";
cin>>key;
// binary search
while (low<=high){
    mid = ( low + high )/2;
    if (names[mid] == key){
        cout<<key<<" was found and is aged"<<ages[mid]<<endl;
        found = true;
        break;
    }
    else if(key >names[mid]){
        low = mid + 1;
    }
    else{
        high = mid -1;
    }
}
if (!found){
    cout<<"not found"<<endl;
}

    return 0;
}
