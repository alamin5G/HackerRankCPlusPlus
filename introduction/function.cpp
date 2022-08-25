/**
 * @file function.cpp
 * see the problem - https://prnt.sc/mzTYY1j_r1DD
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


 int max_of_four(int a, int b, int c, int d){
     
     return ((a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d));
 }


int main() {
    int a, b, c, d;
    cin >> a >> b >> c>> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans << endl;
    
    return 0;
}
