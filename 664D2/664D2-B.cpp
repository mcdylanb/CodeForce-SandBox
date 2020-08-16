/*
 * =====================================================================================
 *
 *       Filename:  664D2-B.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/14/2020 07:15:15 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int main () {
  int n,m,x,y;
  cin >> n >> m >> x >> y;
  cout << x << " " << y << endl;
  //go left
  while (x < n){
    x++;
    cout << x << " " << y << endl;
  }
  while (y < m){
    y++;
    cout << x << " " << y << endl;
  }
  while (y > 1){
    y--;
    cout << x << " " << y << endl;
  }
  while (x > 1){
    x--;
    cout << x << " " << y << endl;
  }
}

