int maxArea(int* height, int heightSize) { 
  int lower=0;
  int upper=heightSize-1;
  int maxArea=0;
  
 while (lower<upper) { 
    int currentHeight = (height[lower] < height[upper]) ? height[lower] : height[upper];
        int currentWidth = upper - lower;
        int currentArea = currentHeight * currentWidth;

        if (currentArea > maxArea) {
            maxArea = currentArea;
        }
   if (height[lower]<height[upper] )
   {
    lower=lower+1;
   }
    else
    {
        upper=upper-1;
    }
 }
    return maxArea;
};