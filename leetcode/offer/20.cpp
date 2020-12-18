///////////////////////////////////////////////////////////////
// File Name: 20.cpp
// Author: tt
// Email: tttt@xiyoulinux.org
// Created Time : 2020-12-10 13:28:31
// Description:
///////////////////////////////////////////////////////////////
class Solution {
public:


    bool judge(string s) {

        cout << s << endl;

        int positiveNum = 0, negativeNum = 0;
        for(int i = 0; i < s.length(); i ++) {   

            if(s[i] >= 'A' && s[i] <= 'z') {

                return false;
            }else if(s[i] == '.') {

                return false;
            }else if(s[i] == '+'){

                positiveNum++;
            }else if(s[i] == '-') {

                negativeNum++;
            }

        }

        if(negativeNum >1 || positiveNum > 1 || (positiveNum + negativeNum) > 1) return false;


        return true;
    }

    bool isNumber(string s) {
        
        int sum = 0;
        while(s[sum] == ' ') {

            sum++;
        }

        s = s.substr(sum, s.length() - sum);

        sum = s.length() - 1;
        while(s[sum] == ' ') {

            sum--;
        }
        s = s.substr(0, sum + 1);

        //".", "      ", e9, ". 1", ".e1"
        cout << s << endl;
        if( s.length() > 1) {

            if(s[0] == '.' && s[1] == 'e' || s[0] == '.' && s[1] == 'E') return false;
        }
        if(s == "." || s.length() == 0 || s[0] == 'e' || s[0] == 'E') {

            return false;
        }

        cout << s << endl;
        int positiveNum = 0, negativeNum = 0, point = 0;
        bool haveE = false;
        int  posi = -1;
        bool isnumer = true;

        for(int i = 0; i < s.length(); i ++) {

            if(s[i] == '+') positiveNum++;
            else if(s[i] == '-') negativeNum++;
            else if(s[i] == 'e' || s[i] == 'E') {
                
                cout << "e" << endl;
                cout << "i = " << i << "  length = " << s.length() << endl;
                if(i == s.length() - 1) {

                    return false;
                }
                haveE = true;
                posi = i + 1;
                break;
            }else if(s[i] >= 'A' && s[i] <= 'z' || s[i] == ' ') {

                isnumer = false;
                break;
            }else if(s[i] == '.') {

                point++;
            }
        }

        if(haveE) {
            
            if(judge(s.substr(posi, s.length() - posi))) return true;
            else return false;
        }

        if(positiveNum > 1 || negativeNum > 1 || point > 1 || (negativeNum + positiveNum) > 1 || !isnumer) return false;

        return true;
    }
};
