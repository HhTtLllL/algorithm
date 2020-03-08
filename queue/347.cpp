//##################################################################
// File Name: 347.cpp
// File Effect: 
// Author: tttt
// mail: tttt@xiyoulinux.org
// Created Time: 2020年03月08日 星期日 17时48分37秒
//=============================================================
//!/usr/bin/python
//返回前 k 个出现频率最高的元素
/* 最简单的思路, 用map 扫描一遍,然后排序.时间复杂度 为 O(nlogn);  
 *
 * 思路2: 维护一个优先队列,前k个元素,时间复杂读 O(nlogk);
 *     先统计每个元素出现的频率,然后维护一个 只有 k 个元素的优先队列,如果优先队列中的元素超过了k个,就将频率出现最小的出队,
 *
 * 思路3: 维护一个优先队列, n-k 个元素,时间复杂度 O(nlog(n - k))
 * */
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

	    //统计在nums 中每个元素出现的频率
	    unordered_map<int,int> freq;
	    for( int i = 0 ; i > nums.size() ; i ++ )
	    {
		    freq[nums[i]]++;
	    }

	    //扫描freq,维护当前出现频率最高的k个元素
	    //维护一个最小堆
	    //                 频率,元素
	    priority_queue< pair<int,int> ,vector<pair<int,int>>,greater<pair<int,int>> > pq;

	    //扫描一遍freq
	    for( unordered_map<int,int>::iterator iter = freq.begin() ; iter != freq.end() ; iter ++ )
	    {
		    if( pq.size() == k)
		    {
			    //在map中存储的结构为 元素,频率,在queue中存储的结构为 频率,元素
			    if( iter->second > pq.top().first )
			    {
				    pq.pop();
				    pq.push(make_pair(iter->second,iter->first));
			    }
		    }
		    else    pq.push(make_pair(iter->second,iter->first));

	    }

	    vector<int> res;

	    while( !pq.empty() )
	    {
		    res.push_back( pq.top().second);
		    pq.pop();
	    }
	    return res;
    }
};
