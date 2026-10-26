class Solution {
public:
    int differenceOfSums(int n, int m) {
       int num1=0;
       int num2=0;
    for(int i=1;i<=n;i++){
        if(i%m==0){
            num1+=i;
        }
        else{
            num2+=i;
        }
    }
    return num2-num1;
  
  
  //method 2
  
  
    //     int sum=0;
    // for(int i=1;i<=n;i++){
    //     if(i%m==0){
    //         sum-=i;
    //     }
    //     else{
    //         sum+=i;
    //     }
    // }
   
   
    // method 1
   
   
    //   int k=n/m;
    //   int num2=((m+m*k)*k)/2;
    //    int t=(n*(n+1))/2;
    //    int num1=t-num2;
    //       return num1-num2;
    // return sum;
    }
  
};