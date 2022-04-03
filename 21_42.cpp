#include <iostream> 

using namespace std;
using std::cout;
using std::endl;

int cmpCountSort(int a[],int b[],int n){
    int i,j,*count;
    count = new int[n];
    for(i = 0;i < n;i++) count[i] = 0;
    for(i = 0;i < n-1;i++)
        for(j = i+1;j < n;j++)
            if(a[i] < a[j])  count[j]++;
            else count[i]++;
    for(i = 0;i < n;i++) b[count[i]] = a[i];
    delete count;
}

int main()
{
    int a[6] = {25,-10,25,10,11,19};
    int b[6];
    cmpCountSort(a[6],b[6],6);
    return 0;
}

