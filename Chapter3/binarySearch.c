/* as in the book */
int binarySearch(int x, int a[], int n){
  int low = 0, mid, high = n;

  while(low <= high){
    mid = (high + low) / 2;
    if(a[mid] == x){
      return x;
    }
    else if (x > a[mid]){
      low = mid + 1;
    }
    else {
      high = mid - 1;
    }
  }
  return -1; //not found
}
