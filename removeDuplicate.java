class opp1 {
    public static boolean[] map = new boolean[26];

    public static void removeDuplicate(String k,int m, String newString){
        if(m==k.length()){
            System.out.println(newString);
            return;
        }
        char currcur = k.charAt(m);
        if(map[currcur-'a']==true){
            removeDuplicate(k, m+1, newString);
        }
        else{
            newString += currcur;
            map[currcur-'a']=true;
            removeDuplicate(k, m+1, newString);
        }
    }
    public static void main(String args[]){
        String k = "abbagfghd";
        removeDuplicate(k, 0, " ");
    }
}
