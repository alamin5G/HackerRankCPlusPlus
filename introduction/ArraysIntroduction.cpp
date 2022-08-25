/**
 * @file ArraysIntroduction.cpp
 * see the problem - https://prnt.sc/STXGRDWCLKPP
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(auto i=0; i<n; i++){
        cin >> arr[i];
    }

    for(auto i = n-1;i>=0;i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}