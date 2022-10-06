#include <iostream>
#include <vector>
using namespace std;

int main()
{
    setlocale(0, "");

    int n, div = 2;
    cout << "Введи число: ";
    cin >> n;

    vector <int> divs;
    while (n > 1)
    {
        while (n % div == 0)
        {
            n = n / div;
            divs.push_back(div);
        }
        div++;
    }
    for (int z = 0; z < divs.size(); z++) {
        cout << divs[z] << " ";
    }

    static int counter = 1, amount = 0, max_div;
    for (int g = 0; g < divs.size() - 1; g++)
    {    
        if (divs[g] == divs[g + 1])
        {
            counter++;
            if (counter > amount)
            {
                amount = counter;
                max_div = divs[g];
            }
        }
        else if (divs[g] != divs[g+1])
            counter = 1;
    }

    if (max_div == 0)
        max_div = divs[0];

    cout << " \n" << "Наиболее встречаемый простой делитель = " << max_div;
}
