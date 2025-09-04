class Solution {
public:
    int findClosest(int x, int y, int z) {
        int diffx = abs(z-x);
        int diffy = abs(z-y);
        if(diffx < diffy) return 1;
        else if (diffx > diffy) return 2;
        return 0;
    }
};