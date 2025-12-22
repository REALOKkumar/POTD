#include<bits/stdc++.h>
using namespace std;



class Solution {
public:

    int overlapArea(int x1,int y1,int x2,int y2,
                int x3,int y3,int x4,int y4) {

    int overlapWidth  = min(x2, x4) - max(x1, x3);
    int overlapHeight = min(y2, y4) - max(y1, y3);

    if (overlapWidth <= 0 || overlapHeight <= 0)
        return 0;

    return overlapWidth * overlapHeight;
}





    int computeArea(int ax1, int ay1,  int ax2, int ay2, int bx1, int by1,   int bx2, int by2) {

        // area of rectangle 1 
        int area1 =(ax1 - ax2)*(ay1 - ay2);
    
        // area of rectangle 2 
        int area2 =(bx1 - bx2)*(by1 - by2);


        //sum of area of both rectangles
        int total_area = area1 + area2;

        int overlap=overlapArea(ax1, ay1,  ax2, ay2,  bx1, by1, bx2, by2);

        // if overlap occour not occour
        if(bx1 >= ax2 || bx2<=ax1   ||   by2<=ay1 || by1>=ay2){
            return total_area;
        }
        else{


            return (total_area-overlap);
        }

        return total_area;
        
    }
};



int main(){
    int ax1 = -3, ay1 = 0, ax2 = 3, ay2 = 4, bx1 = 0, by1 = -1, bx2 = 9, by2 = 2;

    Solution sol;
    cout<< sol.computeArea( ax1, ay1,  ax2, ay2, bx1, by1,   bx2, by2);

    return 0;

}