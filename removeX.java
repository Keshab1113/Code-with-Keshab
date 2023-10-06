class opp1 {
    public static void removeX(String k,int m, int count, String newString){
        if(m==k.length()){
            for(int i=0;i<count;i++){
                newString += 'x';
            }
            System.out.println(newString);
            return;
        }
        if(k.charAt(m)!='x'){
            newString= newString + k.charAt(m);
            removeX(k, m+1, count, newString);
        }
        else{
            count++;
            removeX(k, m+1, count, newString);
        }
    }
    public static void main(String args[]){
        String k = "abxcxd";
        removeX(k, 0, 0, "");
    }
}
