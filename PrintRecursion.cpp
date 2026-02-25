#include <iostream>
using namespace std;

void PrintRecursion(int N){
if(N<=0){
    return ;
}
PrintRecursion(N-1);
cout<< "I love Recursion"<<endl;
}
int main()
{
    int N;
    cin>>N;
    PrintRecursion(N);
    return 0;
}
