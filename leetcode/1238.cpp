
class Solution {
public:
	    vector<int> ans;
	    int MAX;
	    int flag = 0;
   // int book[10000000];
	    vector<int> circularPermutation(int n, int start) 
	    {
		    MAX = pow(2,n) - 1;
            vector<int> book(MAX+1,0);
		    ans.push_back(start);
 //           cout << "MAX" << MAX << endl;
            book[start] = 1;
		    dfs(0,book);

		    return ans;
	    }
	    void dfs(int time,vector<int>& book)
	    {
		    if(time >= MAX || (flag == 1))
		    {
			    flag = 1;
      //          for(auto i : ans)
         //           cout << i << " ";
			    return ;
		    }

		    for(int i = 0;i <= MAX;i++)
		    {
 		//	    if(book[i] == 0 && judge(i,ans.back()) && flag == 0)
			if(book[i] == 0)
                {
         //      cout << "i = " << i << endl;
                if(flag == 0)
                {
            //        cout << "i = " << i <<endl;
                    if(judge(i,ans.back()))
                    {
        //                cout << "i = " << i << endl;
 				    ans.push_back(i);
				    book[i] = 1;
				    dfs(time + 1,book);
        		    book[i] = 0;
      //      	    ans.pop_back();
                    }
                }
		//		    book[i] = 0;
			//	    ans.pop_back();
			    }
		    }

	    }

	    bool judge(int x,int y)
	    {
		    int max1 = max(x,y);
		    int min1 = min(x,y);
		    int sum = 0;
            do
            {
                if((min1%2) != (max1%2))    sum++;
			    min1 = min1 / 2;
			    max1 = max1/2;
            }while(min1);
            
		    while(max1)
		    {
			    sum++;
			    max1 = max1 / 2;
		    }
            
		    if(sum == 1)
                return true;
		    else
                return false;
            
        }
};

//[1,3,2,6,7,5,4,12,13,15,14,10,11,9,8,0]
