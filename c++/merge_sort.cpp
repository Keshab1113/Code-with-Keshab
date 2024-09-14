void merge(vector<int>& arr, int left,int h, int right){
    vector<int>temp;
    int low=left;
    int high=h+1;
    while(low<=h && high <= right){
        if(arr[low]<=arr[high]){
            temp.push_back(arr[low]);
            low++;
        }
        else{
            temp.push_back(arr[high]);
            high++;
        }
    }
    while(low<=h){
        temp.push_back(arr[low]);
            low++;
    }
    while(high<=right){
        temp.push_back(arr[high]);
            high++;
    }
    for(int i=left;i<=right;i++){
        arr[i]=temp[i-left];
    }
}
void mergeSort(vector<int>& arr, int l, int r) {
    if(l==r) return;
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
