#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 1;
    vector<int> arr;
    
    while (arr.size() < 5)
    {
        int suma = 0;
        for (size_t i = 1; i < n; i++)
        {
            if(n % i == 0){
                suma += i;
            }
        }

        if (suma == n)
        {
            cout << "\n" << n << " es perfecto";
            arr.push_back(n);
        }
        n++;
    }
    
    
    
}