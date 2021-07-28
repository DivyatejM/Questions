// Implement an algorithm to determine if a string has all unique characters.
// Time Complexity O(n)   Space Complexity O(1)
#include<bits/stdc++.h>
using namespace std;
int ascii[256];
bool isUnique(string s) {
  for(int i=0;i<s.length();i++) {
    int val=int(s[i]);
    if(ascii[val]) {
      return false;
    }
    ascii[val] = true; 
  }
  return true;
}
int main() {
  string s;
  getline(cin,s);
  if(isUnique(s))
    cout<<"Unique";
  else
    cout<<"Not Unique";

  return 0;
}
