class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        string X;
        int count,res=0;
       for(int i=0;i<sentences.size();i++){
           count=1;
           X=sentences[i];
           for(int j=0;j<X.size();j++){
               if(X[j]==' '){
                   count++;
               }
           }
           res=max(count,res);
       } 
       return res;
    }
};
