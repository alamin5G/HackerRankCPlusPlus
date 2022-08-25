/**
 * @file pointer.cpp
 * see the problem - https://prnt.sc/zHvpgR7TcXN0
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

void update(int *a,int *b) {
        int temp = *a;
        *a = temp + *b;
        *b = abs(temp-*b);
}

int main() {
    int a, b;    
    cin >> a >> b;
    update(&a, &b);
    cout << a << endl;
    cout << b << endl;

    return 0;
}
