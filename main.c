#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main()
{
    char map[10][10]={"######",
                      "#O #  ",
                      "# ## #",
                      "#  # #",
                      "##   #",
                      "######",
                     };
    int x,y,n,p;//xy表示当前小球坐标，np存放终点坐标
    x = 1, y = 1, n = 1, p = 5;
    int i;
    char c;
    for(i=0; i<=6; i++)
        printf("%s\n",map[i]);

    while(x!=1 || y!=5)
    {
        c = getch();
        if(c == 'w')
        {
            if(map[x-1][y]!='#')
            {
                map[x][y] = ' ';
                x--;
                map[x][y] = 'o';
            }

        }
        if(c == 'a')
        {
          if(map[x][y-1]!='#')
            {
                map[x][y] = ' ';
                y--;
                map[x][y] = 'o';
            }
        }
        if(c =='s')
        {
           if(map[x+1][y]!='#')
            {
                map[x][y] = ' ';
                x++;
                map[x][y] = 'o';

            }
        }
        if(c == 'd')
        {
           if(map[x][y+1]!='#')
            {
                map[x][y] = ' ';
                y++;
                map[x][y] = 'o';
            }
        }
        system("cls");
        for(i=0; i<=6; i++)
            printf("%s\n",map[i]);

    }
    system("cls");
    printf("you win!\n");
    return 0;
}
