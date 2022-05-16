class Solution
{
public:
    int words(string s)
    {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                count++;
            }
        }
        return count+1;
    }
    int mostWordsFound(vector<string>& sentences)
    {
        int ans=0;
        for(int i=0;i<sentences.size();i++)
        {
            if(words(sentences[i])>ans)
            {
                ans=words(sentences[i]);
            }
        }
        return ans;
    }
};
