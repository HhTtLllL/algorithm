///////////////////////////////////////////////////////////////
// File Name: thread.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-11-07 14:18:11
// Description:
///////////////////////////////////////////////////////////////

#include <iostream>
#include <mutex>
#include <thread>

using namespace std;

void print(int i) {

    cout << "thread: i = " << i << endl;
}

int main() {


    thread t1{ print, 2 };

    t1.join();
}
