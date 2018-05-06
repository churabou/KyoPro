#include<iostream>
using namespace std;

int main() {
    
    int h, w;
    cin >> h >> w;
    int grid[w][h];
    
   
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            char s;
            cin >> s;
            grid[x][y] = (s == '#') ? 1 : 0; //以後　白黒を0、1で扱う。
        }
    }
    
    
    bool canDraw = true;
    
    for (int x = 0; x < w; x++) {
        for (int y = 0; y < h; y++) {
            
            int top = grid[x][y-1];
            int left = grid[x-1][y];
            int right = grid[x+1][y];
            int bottom = grid[x][y+1];
            int center = grid[x][y];
            
            bool roundWhite = top + left + right + bottom == 0;
            
            if (roundWhite && center == 1) {
                canDraw = false;
            }
            
        }
    }
    
    string ans = canDraw ? "yes" : "no";
    cout << ans << endl;
}
