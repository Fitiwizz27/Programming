#include <iostream>
#include <string>
#include <vector>

using namespace std;

const string maze[25] = {
    "####B######################",
    "# #       #   #      #    #",
    "# # # ###### #### ####### #",
    "# # # #       #   #       #",
    "#   # # ######### # ##### #",
    "# # # #   #       #     # #",
    "### ### ### ############# #",
    "# #   #     # #           #",
    "# # #   ####### ###########",
    "# # # #       # #         C",
    "# # ##### ### # # ####### #",
    "# # #     ### # #       # #",
    "#   ##### ### # ######### #",
    "######### ### #           #",
    "# ####### ### #############",
    "A           #   ###   #   #",
    "# ############# ### # # # #",
    "# ###       # # ### # # # #",
    "# ######### # # ### # # # F",
    "#       ### # #     # # # #",
    "# ######### # ##### # # # #",
    "# #######   #       #   # #",
    "# ####### ######### #######",
    "#         #########       #",
    "#######E############D######"
};

char s1[25][27];

void sol_maze(int x, int y)
{
    for (int i = 1; i < 24; i++)
    {
        for (int j = 1; j < 26; j++)
        {
            if (s1[i][j] == ' ')
            {
                if (maze[i - 1][j] != '#') s1[i - 1][j] = maze[i - 1][j];
                if (maze[i + 1][j] != '#') s1[i + 1][j] = maze[i + 1][j];
                if (maze[i][j - 1] != '#') s1[i][j - 1] = maze[i][j - 1];
                if (maze[i][j + 1] != '#') s1[i][j + 1] = maze[i][j + 1];
            }
        }
    }
}

int main()
{
	setlocale(LC_ALL, "Russian");
	system("mode con cols=50 lines=60");

    /*for (auto i = 0; i < 25; i++)
        cout << maze[i] << endl;
    cout << endl;*/

    for (int i = 0; i < 25; i++)
        for (int j = 0; j < maze[i].size(); j++)
            s1[i][j] = '#';

    int x, y;
    cin >> x >> y;

    if (maze[x][y] != '#') s1[x][y] = ' ';

    for (int i = 0; i < 50; i++)
        sol_maze(x, y);

    /*for (int i = 0; i < 25; i++)
    {
        for (int j = 0; j < maze[i].size(); j++)
        {
            cout << s1[i][j];
        }
        cout << endl;
    }*/

    for (int i = 0; i < 25; i++)
        for (int j = 0; j < maze[i].size(); j++)
            if ((s1[i][j] != '#') && (s1[i][j] != ' '))
                cout << s1[i][j] << ' ';
    
    cout << endl;
	system("pause");
};