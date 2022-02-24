#include <stdio.h>          
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <deque>
using namespace std;



// int main()
// {
//     int x = 0;
//     map<string, int> t;
//     deque<int> q;
//     deque<int>::iterator it;
    
//     t["asb"] = 6;
//     t["abd"] = 8;
//     q.push_back(x++);
//     q.push_back(x++);
//     q.push_back(x++);
//     q.push_back(x++);
//     // q.push_front(x++);
    
//     cout << t["asb"] << endl;
//     // it = q.begin();
//     // while(it != q.end())
//     // {
//     //     cout << *it << endl;
//     //     it++;
//     // }

//     return EXIT_SUCCESS;
// }
// int main()
// {
//     vector<vector<int> > grille;


//     grille.push_back(vector<int>(5,6));
//     grille.push_back(vector<int>(22,33));
//     int i = 0;
//     int j = 0;
//     while (i < grille.size())
//     {
//         j = 0;
//         while (j < grille[i].size())
//         {
//             cout << grille[i][j];
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     // cout << grille[1].size() << endl;
//     // cout << grille[0][0] << endl;
//     // cout << grille[0][1] << endl;
//     // cout << grille[0][2] << endl;
//     // cout << grille[0][3] << endl;
//     // cout << grille[0][4] << endl;
//     // cout << grille[1][0] << endl;
//     // cout << grille[1][1] << endl;
//     // cout << grille[1][2] << endl;
//     // cout << grille[1][3] << endl;
//     // cout << grille[1][4] << endl;
// }

int main()
{
    string out;
    ifstream monFlux("main.cpp");
    ofstream mon("m.cpp", ios::app);
    while (getline(monFlux, out))
    {
        cout << out << endl;
        mon << out << endl;
    }
    return 0;
}