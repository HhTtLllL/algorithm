///////////////////////////////////////////////////////////////
// File Name: 41.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2021-01-09 19:38:29
// Description:
///////////////////////////////////////////////////////////////
class MedianFinder {

private: 
    vector<int> res;
    int size;

/*

void insertHash(int x)
{
    hash[0].insert(lower_bound(hash[0].begin(),hash[0].end(),x),x);
} 

*/
public:
    /** initialize your data structure here. */
    MedianFinder() {
        
        size = 0;
    }
    
    void addNum(int num) {

        res.insert(lower_bound(res.begin(), res.end(), num), num);
        size++;
    }
    
    double findMedian() {

        if(size%2 == 0) {

            //偶数个
            return (res[size / 2] + res[(size / 2) - 1]) / (2.0);
        }else {

            //奇数个 
            return res[size / 2];
        }

        return 0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
