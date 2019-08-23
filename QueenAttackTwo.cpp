//Alhamdulillah 
//Date : 24/08/2019
//Code Writer : GM_Sompod
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,o,counter = 0;
    //those variables are hold the old obstacles distance
    //..............................................
    int oldd1,oldu,oldd2,oldr,oldd3,oldd,oldd4,oldl;
    //................................................
    int d1 = 0;
    int u = 0;
    int d2 = 0;
    int r = 0;
    int d3 = 0;
    int d = 0;
    int d4 = 0;
    int l = 0;
    cin >> n >> o;
    //n += 1;
    o += 1;
    int qx,qy;
    cin >> qx >> qy;
    int ox,oy;
    for(int i=1; i<o; i++) // this loop for input the obstacles
    {
        cin >> ox >> oy;

        if(d1==0 || u==0 || d2==0 || r==0 || d3==0 || d==0 || d4==0 || l==0) // only queen can move the eight way.
        {
            if(qx == ox)  // this check obstacles position of horizontal
            {
                if(oy<qy)
                {
                    if(l==0)
                    {
                        oldl = abs(qy - oy) - 1;
                        counter = counter + abs(qy - oy) - 1;
                        l = 1;
                    }else if(l == 1){
                        if(oldl > abs(qy - oy) - 1){
                            counter = counter - oldl;
                            counter = counter + abs(qy - oy) - 1;
                            oldl = abs(qy - oy) - 1;
                        }
                    }
                }
                else if(oy>qy)
                {
                    if(r==0)
                    {
                        oldr = abs(qy - oy) - 1;
                        counter = counter + abs(qy - oy) - 1;
                        r = 1;
                    }else if(r==1){
                        if(oldr > abs(qy - oy) - 1){
                            counter = counter - oldr;
                            counter = counter + abs(qy - oy) - 1;
                            oldr = abs(qy - oy) - 1;
                        }
                    }
                }
            }
            else if(qy == oy)  // this check the obstacles position of vertical
            {
                if(ox<qx)
                {
                    if(u==0)
                    {
                        oldu = abs(qx - ox) - 1;
                        counter = counter + abs(qx - ox) - 1;
                        u = 1;
                    }
                    else if(u == 1){
                        if(oldu > abs(qx - ox) - 1){
                            counter = counter - oldu;
                            counter = counter + abs(qx - ox) - 1;
                            oldu = abs(qx - ox) - 1;
                        }
                    }
                }
                else if(ox>qx)
                {
                    if(d==0)
                    {
                        oldd = abs(qx - ox) - 1;
                        counter = counter + abs(qx - ox) - 1;
                        d = 1;
                    }
                    else if(d == 1){
                        if(oldd > abs(qx - ox) - 1){
                            counter = counter - oldd;
                            counter = counter + abs(qx - ox) - 1;
                            oldd = abs(qx - ox) - 1;
                        }
                    }

                }
            }
            else if(abs(abs(qx-ox)-abs(qy-oy)) == 0)  // its check the diagonal position of obstacles
            {
                if(ox < qx && oy < qy)  // for 1st diagonal
                {
                    if(d1==0)
                    {
                        oldd1 = abs(qx - ox) - 1;
                        counter = counter + abs(qx - ox) - 1;
                        d1 = 1;
                    }
                    else if(d1==1){
                        if(oldd1 > abs(qx - ox) - 1){
                            counter = counter - oldd1;
                            counter = counter + abs(qx - ox) - 1;
                            oldd1 = abs(qx - ox) - 1;
                        }
                    }
                }
                else if(ox < qx && oy > qy)
                {
                    if(d2==0)
                    {
                        oldd2 = abs(qx - ox) - 1;
                        counter = counter + abs(qx - ox) - 1;
                        d2 = 1;
                    }
                    else if(d2==1){
                        if(oldd2 > abs(qx - ox) - 1){
                            counter = counter - oldd2;
                            counter = counter + abs(qx - ox) - 1;
                            oldd2 = abs(qx - ox) - 1;
                        }
                    }
                }
                else if(ox > qx && oy > qy)
                {
                    if(d3==0)
                    {
                        oldd3 = abs(qx - ox) - 1;
                        counter = counter + abs(qx - ox) - 1;
                        d3 = 1;
                    }
                    else if(d3==1){
                        if(oldd3 > abs(qx - ox) - 1){
                            counter = counter - oldd3;
                            counter = counter + abs(qx - ox) - 1;
                            oldd3 = abs(qx - ox) - 1;
                        }
                    }
                }
                else if(ox > qx && oy < qy)
                {
                    if(d4==0)
                    {
                        oldd4 = abs(qx - ox) - 1;
                        counter = counter + abs(qx - ox) - 1;
                        d4 = 1;
                    }
                    else if(d4 == 1){
                        if(oldd4 > abs(qx - ox) - 1){
                            counter = counter - oldd4;
                            counter = counter + abs(qx - ox) - 1;
                            oldd4 = abs(qx - ox) - 1;
                        }
                    }
                }
            }
        }
    }
    if(d1==0)
    {
        int g = qx;
        int h = qy;
        while(true)
        {
            if(g==1 || h==1)
            {
                break;
            }
            --g;
            --h;

            ++counter;

        }
    }
    if(u==0)
    {
        int g = qx;
        while(true)
        {
            if(g==1)
            {
                break;
            }
            --g;

            ++counter;

        }
    }
    if(d2==0)
    {
        int g = qx;
        int h = qy;
        while(true)
        {
            if(g==1 || h==n)
            {
                break;
            }
            --g;
            ++h;

            ++counter;

        }
    }
    if(r==0)
    {
        int g = qx;
        int h = qy;
        while(true)
        {
            if(h == n)
            {
                break;
            }
            ++h;

            ++counter;

        }
    }
    if(d3==0)
    {
        int g = qx;
        int h = qy;
        while(true)
        {
            if(g == n || h == n)
            {
                break;
            }
            ++g;
            ++h;

            ++counter;

        }
    }
    if(d==0)
    {
        int g = qx;
        int h = qy;
        while(true)
        {
            if(g == n)
            {
                break;
            }
            ++g;

            ++counter;

        }
    }
    if(d4==0)
    {
        int g = qx;
        int h = qy;
        while(true)
        {
            if(g == n || h==1)
            {
                break;
            }
            ++g;
            --h;

            ++counter;

        }
    }
    if(l==0)
    {
        int g = qx;
        int h = qy;
        while(true)
        {
            if(h==1)
            {
                break;
            }
            --h;

            ++counter;

        }
    }
    cout << counter << endl;
    return 0;
}
