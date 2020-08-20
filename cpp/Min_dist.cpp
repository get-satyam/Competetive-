#include<iostream>

#include<math.h>

#include<algorithm>

using namespace std;

int findSmallestElement(int arr[], int n){

   int temp = arr[0];
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
         temp=arr[i];
      }
   }
   return temp;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int min = -1;
   for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if (a[i] == a[j]){
				if (min == -1) min = j-i;
				else if (min > j-i) min = j-i;
			}
		}
	}
	cout <<min;
}