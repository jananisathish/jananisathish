#include <iostream> 
using namespace std;
int main()
{
 int num = 121;
 int copyNum = num;
 int reverse = 0;

 
 while(copyNum != 0)
 {
  reverse = reverse * 10;
  reverse = reverse + (copyNum % 10);
  copyNum = copyNum / 10;
 }
 
 if(num == reverse)
  cout << num << " is a palindrome number";
 else
  cout << num << " is not a palindrome number";
 
 return 0;
}