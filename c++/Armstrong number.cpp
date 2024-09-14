int order(int x)
{
    int n = 0;
    while (x) {
        n++;
        x = x / 10;
    }
    return n;
}
bool checkArmstrong(int n){
	int temp = n;
	int count = order(n);
        int p = 0;
        while (n > 0) {
 
            int rem = n % 10;
            p = (p) + pow(rem,count);
            n = n / 10;
        }
          if (temp == p) {
            return true;
        }
        else {
            return false;
        }
}
