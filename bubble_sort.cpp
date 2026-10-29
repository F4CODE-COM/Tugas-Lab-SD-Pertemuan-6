#include <iostream>
using namespace std;


int main(){
    int data[] = {5,2,4,1,3};
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (data[j] > data[j+1])
            {
                swap(data[j], data[j+1]);
            }
            
        }
        
    }

    cout << "hasil Bubble sort : " ;
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    

}