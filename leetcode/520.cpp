bool detectCapitalUse(char * word)
{
	int flag = 0; // 判断首字母是否大写
	int flag2 = 0;  //记录小写字母个数
	int flag3 = 0;  //记录大写字母个数
	if(strlen(word) == 1) return true;
	else
	{
		if(word[0] >= 'A' && word[0] <= 'Z') flag = 1;
		for(int i = 0;i < strlen(word);i++)
		{
			if(word[i] >= 'a' && word[i] <= 'z')	flag2 = 0;
			else flag3++;
		}
		if(flag2 == 0) return true;         //全为大写字母
		else if(flag3 == 0) return true;    // 全为小写字母
		else if(flag == 1 && flag3 == 1 ) return True;
		else return false;



	}
}
