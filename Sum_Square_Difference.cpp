#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i;
    long long sum = 0;
    long long sum_of_squares = 0;
    
    for (i = 1; i <= n; i++)
    {
        sum += i;               
        sum_of_squares += i * i;
    }
    long long square_of_sum = sum * sum;
    long long difference = square_of_sum - sum_of_squares;
    cout << "Difference = " << difference << endl;
    return (0);
}
