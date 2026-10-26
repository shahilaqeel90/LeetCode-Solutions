class Solution {
public:
    int differenceOfSums(int n, int m) {
      int k=n/m;
      int num2=((m+m*k)*k)/2;
       int t=(n*(n+1))/2;
       int num1=t-num2;
          return num1-num2;
    }
  
};